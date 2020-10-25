/* 4. Write a function in C++ to read a matrix of size m X n and display the same on screen. */

#include<iostream>
using namespace std;

void readAndDisplay();

int main(){
    readAndDisplay();
    return 0;
}

void readAndDisplay(){

    int row, column;
    cout << "Enter number of rows and columns:" << endl;
    cin >> row >> column;
    int matrix[row][column];
    cout << "Enter the elements of matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> matrix[i][j];
        }
        
    }
    cout << "The elements of the matrix are:" << endl;
     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << " " ;
        }
        cout << endl;
    }
    

}