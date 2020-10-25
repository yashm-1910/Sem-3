//Write a program to read two numbers from the keyboard and display the larger value on the screen

#include<iostream>
using namespace std;

int main(){
    int num1, num2, max;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;

    max = (num1 > num2) ? num1 : num2;

    cout << "The largest between " << num1 << " and " << num2 << " is " << max << endl ;

    return 0;
}