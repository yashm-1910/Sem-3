/*
Virtual function is used to achieve runtime polymorphism
A virtual function is a member function which is declared within a base class 
and is re-defined(Overriden) by a derived class. 
    Virtual functions ensure that the correct function is called for an object, 
    regardless of the type of reference (or pointer) used for function call.
    They are mainly used to achieve Runtime polymorphism
    Functions are declared with a virtual keyword in base class.
    The resolving of function call is done at Run-time.
*/

// C++ program for function overriding 

#include <bits/stdc++.h> 
using namespace std; 

class base 
{ 
public: 
	virtual void print () 
	{ cout<< "print base class" <<endl; } 

	void show () 
	{ cout<< "show base class" <<endl; } 
}; 

class derived:public base 
{ 
public: 
	void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
	{ cout<< "print derived class" <<endl; } 

	void show () 
	{ cout<< "show derived class" <<endl; } 
}; 

//main function 
int main() 
{ 
	base *bptr; 
	derived d; 
	bptr = &d; 
	
	//virtual function, binded at runtime (Runtime polymorphism) 
	bptr->print(); 
	
	// Non-virtual function, binded at compile time 
	bptr->show(); 

	return 0; 
} 
