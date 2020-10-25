/* 5. Write a c++ function power () to raise a number m to power n. The function takes a double
value for m and int value for n and returns the result correctly. Use function overloading to
change m to int and n to double. */

#include<iostream>
using namespace std;

void power(double m, int n);
void power(int m, double n);

int main(){

    int my_int;
    double my_double;

    cout << "Enter base and exponent:" <<endl;
    cin >> my_double >> my_int;
    power(my_double,my_int); 

    cout << "Enter base and exponent:" <<endl;
    cin >> my_int >> my_double;
    power(my_int, my_double);

    return 0;
}
void power(double m, int n){
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= m;
    }
    cout << "The result is " << result << endl;
    
}
void power(int m, double n){
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= m;
    }
    cout << "The result is " << result << endl;
    
}