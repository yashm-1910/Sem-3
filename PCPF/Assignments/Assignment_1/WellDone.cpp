//2. Write a program to input an integer value from the keyboard and display on screen “WELL DONE” that many number of times.

#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter a positive intiger:" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "WELL DONE" << endl;
    }

    return 0;
    
}


