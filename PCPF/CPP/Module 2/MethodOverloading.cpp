/* 
When there are multiple functions with same name but different parameters 
then these functions are said to be overloaded. 
Functions can be overloaded by change in number of arguments or/and change in type of arguments.

In C++, following function declarations cannot be overloaded.
1) Function declarations that differ only in the return type.
2) Member function declarations with the same name and the name parameter-type-list cannot be overloaded 
   if any of them is a static member function declaration.
3) Parameter declarations that differ only in a pointer * versus an array [] are equivalent.
    int fun(int *ptr); 
    int fun(int ptr[]); // redeclaration of fun(int *ptr) 
Method overloading is compiletime polymorphism
*/

#include<iostream>
using namespace std;

class MethodOverloading { 
    
    public: 

    // function with 1 int parameter 
    void func(int x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name but 1 double parameter 
    void func(double x) 
    { 
        cout << "value of x is " << x << endl; 
    } 
      
    // function with same name and 2 int parameters 
    void func(int x, int y) 
    { 
        cout << "value of x and y is " << x << ", " << y << endl; 
    } 
};

int main(){

    MethodOverloading obj;
    
    // Which function is called will depend on the parameters passed 
    // The first 'func' is called  
    obj.func(7); 
      
    // The second 'func' is called 
    obj.func(9.132); 
      
    // The third 'func' is called 
    obj.func(85,64); 
    return 0; 
}
  

