//4. Write a program that will ask for a temperature in Fahrenheit and display it in Celsius.

#include<iostream>
using namespace std;

int main(){

    float temp_f, temp_c;

    cout << "Enter temperature in Fahrenheit:" << endl;
    cin >> temp_f;

    temp_c = ((temp_f-32)*5)/9;

    cout << temp_f << "°F is " << temp_c << "°C" << endl;

    return 0;
}
