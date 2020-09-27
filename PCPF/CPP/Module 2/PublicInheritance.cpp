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
        a=5;
        b=10;
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
    void multiply(){
        c = b*getA();
    }
    void display(){
        cout<<"A= "<<getA()<<endl;
        cout<<"B= "<<b<<endl;
        cout<<"c= "<<c<<endl;
    }
};

int main(){
    Derived d;
    d.getAB();
    d.multiply();
    d.showA();
    d.display();
    d.b = 20;
    d.multiply();
    d.display();
    return 0;
}
