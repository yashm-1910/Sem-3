/*
WAP to implement inheritance using public visibility access.
*/

/*
When a base class is publically inherited by the derived class
    public membeers of the base class become public members of the derived class
    hence they are acccessible by objets of deriveed class
By default visibility mode is private
*/

//Public inheritance
#include<iostream>

using namespace std;

class Base
{
    int a; //by default private, hence not inheritable
    public:
    int b;
    void getAB(){
        a=24;
        b=36;
    }
    int getA(){
        return a;//This will allow us to access private members
    }
    void showA(){
        cout<<"A= "<<a<<endl;
    }
};

class Derived : public Base //Public derivation
{
    int c; //private declaration
    public:
    void add(){
        //We have to use public member functions of base class to access the private data members of the base class
        c = b+getA();
    }
    void display(){
        cout<<"A= "<<getA()<<endl;
        cout<<"B= "<<b<<endl;
        cout<<"c= "<<c<<endl;
    }
};

int main(){
    Derived d;
    //In public derivation public members of base class become public members of derived class hence they can be accessed by the object of the derived class
    d.getAB();
    d.add();
    d.showA();
    d.display();
    d.b = 20;
    d.add();
    d.display();
    return 0;
}
