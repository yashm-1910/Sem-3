/* 3. Write a program in C++ to find factorial of a number using function */

#include<iostream>
using namespace std;

long factorial(int n);

int main(){

    int num;
    cout << "Enter a postitve integer:" << endl;
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

long factorial(int n){

    if (n >= 1)
    {
        return n*factorial(n-1);;
    }
    else
    {
        return 1;
    }
    
}