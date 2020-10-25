/* 1. Write a C++ program to find the area of a circle and square using simple functions. You
may use the switch case to prompt the user to provide an option to choose between area of a
circle and square*/

#include<iostream>
#include<cmath>

using namespace std;

void areaOfCircle();
void areaOfSquare();

int main(){

    int choice;

    do
    {
        cout << "\n****Main Menu****" << endl;
        cout << "Choose 1 to find area of a circle." << endl;
        cout << "Choose 2 to find area of square." << endl;
        cout << "Choose 3 to exit." << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            areaOfCircle();
            break;
        case 2:
            areaOfSquare();
            break;
        default:
            break;
        }
    } while (choice != 3);
    
    return 0;
}

void areaOfCircle(){

    float radius, area;

    cout << "Enter the radius of circle:" << endl;
    cin >> radius ;

    //area = pow(radius,2)*M_PI;
    cout <<"The area of the circle with radius = " << radius << " is " << pow(radius,2)*M_PI << " square units" << endl;
}

void areaOfSquare(){

    float side;

    cout << "Enter the length of side of the square:" << endl;
    cin >> side;

    //area = pow(side,2);
    cout <<"The area of the circle with length of side of the square = " << side << " is " << pow(side,2) << " square units" << endl;
}