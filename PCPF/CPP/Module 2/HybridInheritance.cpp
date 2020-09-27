//Hybrid inheritance

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
//Define class Test from Student
class Test: public Student{
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

//Declaration of Sport class
class Sport
{
    protected:
    float score;
    public:
    void getScore(){
        cout<<"The score in sports is:"<<score<<endl;
    }
    void setScore(float score){
        this -> score = score;
    }
};



//Declaration of the derived class
//Define class Result from Test and Sport

class Result: public Test, public Sport {
    float total;
    public:
    void display(){
        total = sub1+sub2+score;
        cout<<"The roll no is "<<getRollNo()<<endl;
        getMarks();
        getScore();
        cout<<"Total = "<< total<<endl;
    }
};

int main(){
    Result r;
    r.setRollNo(21);
    r.setMarks(25.5, 26);
    r.setScore(12.5);
    r.display();
    return 0;
}

