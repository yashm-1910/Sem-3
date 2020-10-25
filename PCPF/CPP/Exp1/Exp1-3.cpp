/*
Write a program to illustrate the use of object arrays. Create class employee having the
following details- two private member data for storing name and age of employee. Create
functions getdata( ) and putdata( ) to take the inputs and display the outputs
*/


#include<iostream>
using namespace std;

//Class Employee
class Employee
{
private:
    //Private members of the class Employee
    string name;
    int age;
public:
    //Public member functions of class Employee
    Employee();
    ~Employee();
    void getData(string name, int age);
    void putData();
};

Employee::Employee()
{
}

Employee::~Employee()
{
}
//Function to get values of employee name and age
void Employee::getData(string name, int age){

    this-> name = name;
    this-> age = age;
}
//Function to display employee name and age
void Employee::putData(){

    cout<<"The name of employee is:"<<name<<endl;
    cout<<"The age of employee is:"<<age<<endl;

}

int main(){

    string name;
    int n, age;
    cout<<"Enter the number of employees:";
    cin>>n;
    cout<<endl;
    cout<<"Enter Employee Details:"<<endl;

    //Initializing  object array of class Employee
    Employee emp[n];

    for (int i = 0; i < sizeof(emp)/sizeof(emp[0]); i++)
    {   
        cout<<"\nEmployee "<<i+1<<endl;
        cout<<"Enter employee name:";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter employee age:";
        cin>>age;
        cout<<endl;
        //Function getData() called
        emp[i].getData(name,age);
    }
    cout<<"Displaying Employee Details"<<endl;
    for (int i = 0; i < sizeof(emp)/sizeof(emp[0]); i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;
        //Function putData() called
        emp[i].putData();
    }
    return 0;
    
}