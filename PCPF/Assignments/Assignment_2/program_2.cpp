/* 2. Write a C++ program to find the area of a circle and square using function overloading.
You may use the switch case to prompt the user to provide an option to choose between area
of a circle and square */

#include<iostream>
#include<cmath>

using namespace std;

int areaOfCircle(int radius){
    return pow(radius,2)*M_PI;
}
float areaOfCircle(float radius){
    return pow(radius,2)*M_PI;
}
double areaOfCircle(double radius){
    return pow(radius,2)*M_PI;
}

int areaOfSquare( int side){
    return pow(side,2);
}
float areaOfSquare(float side){
    return pow(side,2);
}
double areaOfSquare(double side){
    return pow(side,2);
}


int main(){

    int choice, my_int;
    float my_float;
    double my_double;
    do
    {
        cout << "\n****Main Menu****" << endl;
        cout << "Choose 1 to find area of a circle as int." << endl;
        cout << "Choose 2 to find area of a circle as float." << endl;
        cout << "Choose 3 to find area of a circle as double." << endl;
        cout << "Choose 4 to find area of a square as int." << endl;
        cout << "Choose 5 to find area of a square as float." << endl;
        cout << "Choose 6 to find area of a square as double." << endl;
        cout << "Choose 7 to exit." << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the radius of circle:" << endl;
            cin >> my_int;
            cout <<"The area of the circle with radius = " << my_int << " is " << areaOfCircle(my_int) << " square units" << endl;
            break;
        case 2:
            cout << "Enter the radius of circle:" << endl;
            cin >> my_float;
            cout <<"The area of the circle with radius = " << my_float << " is " << areaOfCircle(my_float) << " square units" << endl;
            break;
        case 3:
            cout << "Enter the radius of circle:" << endl;
            cin >> my_double;
            cout <<"The area of the circle with radius = " << my_double << " is " << areaOfCircle(my_double) << " square units" << endl;
            break;            
        case 4:
            cout << "Enter the length of side of the square:" << endl;
            cin >> my_int;
            cout <<"The area of the circle with length of side of the square = " << my_int << " is " << areaOfSquare(my_int) << " square units" << endl;
            break;
        case 5:
            cout << "Enter the length of side of the square:" << endl;
            cin >> my_float;
            cout <<"The area of the circle with length of side of the square = " << my_float << " is " << areaOfSquare(my_float) << " square units" << endl;
            break;
        case 6:
            cout << "Enter the length of side of the square::" << endl;
            cin >> my_double;
            cout <<"The area of the circle with length of side of the square = " << my_double << " is " << areaOfSquare(my_double) << " square units" << endl;
            break;        
        default:
            break;
        }
    } while (choice != 7);
    
    return 0;
}