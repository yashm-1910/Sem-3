/*
When a base class is privately inherited by the derived class
    public membeers of the base class become private members of the derived class
    public members of base class can only be acccessed by member functions of deriveed class
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

class Derived : private Base //Private derivation
{
    int c; //private declaration
    public:
    void multiply(){
        getAB();  //to access the public functions of base class call the functions by the member functions of derived class 
        c = b*getA();
    }
    void display(){
        showA();  //public members of base class accessed by the public member functions of derived class
        cout<<"B= "<<b<<endl;
        cout<<"c= "<<c<<endl;
    }
};

int main(){
    Derived d;  //In private derivation public members of base class become private members of derived class hence they cannot be accessed by the object of the derived class
    //d.getAB();
    d.multiply();
    //d.showA();
    d.display();
    //d.b = 20;
    d.multiply();
    d.display();
    return 0;
}

