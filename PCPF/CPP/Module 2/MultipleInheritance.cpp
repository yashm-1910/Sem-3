//Multiple inheritance

#include<iostream>

using namespace std;

//Declaring the base class, members and member functions
class Student{
    protected:
    int rollNo;
    public:
    int getRollNo(){
        return rollNo;
    }
    void setRollNo(int rollNo){
        this -> rollNo = rollNo;
    }
};

//Declaration of next class
class Test{
    protected:
    float sub1, sub2;
    public:
    void getMarks(){
        cout<<"Marks in subject 1 are:"<<sub1<<endl;
        cout<<"Marks in subject 2 are:"<<sub2<<endl;

    }
    void setMarks(float sub1, float sub2){
        this -> sub1 = sub1;
        this -> sub2 = sub2;
    }
};

//Declaration of the derived class
//Define class Result from Test and Student

class Result: public Test, public Student { 
    //the difference in Multilevel and Multiple is that 2 clsses are base classes
    float total;
    public:
    void display(){
        total = sub1+sub2;
        cout<<"The roll no is "<<getRollNo()<<endl;
        getMarks();
        cout<<"Total = "<< total<<endl;
    }
};

int main(){
    Result r;
    r.setRollNo(21);
    r.setMarks(25.5, 26);
    r.display();
    return 0;
}

