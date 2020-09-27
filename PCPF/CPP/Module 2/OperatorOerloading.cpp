/*
C++ also provide option to overload operators. 
For example, we can make the operator (‘+’) for string class to concatenate two strings. 
We know that this is the addition operator whose task is to add two operands. 
So a single operator ‘+’ when placed between integer operands, 
adds them and when placed between string operands, concatenates them.
*/

// CPP program to illustrate 
// Operator Overloading 
#include<iostream> 
using namespace std; 

class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i =0) {real = r; imag = i;} 
	
	// This is automatically called when '+' is used with 
	// between two Complex objects 
	Complex operator + (Complex const &obj) { 
		Complex temp; 
		temp.real = real + obj.real; 
		temp.imag = imag + obj.imag; 
		return temp; 
	} 
	void print() { cout << real << " + i" << imag << endl; } 
}; 

int main() 
{ 
	Complex c1(10, 5), c2(2, 4); 
	Complex c3 = c1 + c2; // An example call to "operator+" compiler sees it as c3=c1.add(c2)
	c3.print(); 
} 

/*
we cannot overload:-
    . (dot) member of object operator
    :: Scope resolution operator
    ?: Conditional operator
    sizeof operator
*/
