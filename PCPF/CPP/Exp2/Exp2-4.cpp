/*
WAP to implement multiple inheritance
*/

//Multiple inheritance

#include<iostream>

using namespace std;

//Declaring the base class, members and member functions
class Mammal{
    protected:
    string type;
    public:
    string getType(){
        return type;
    }
    void setType(string type){
        this -> type = type;
    }
};

//Declaration of next class
class Dog{
    protected:
    string size;
    public:
    void getSize(){
        cout<<"The size of the dog is "<<size<<endl; 
    }
    void setSize(string size){
        this -> size = size;
    }
};


//Declaration of the derived class
//Define class Result from Mammal and Dog

class Husky: public Dog, public Mammal { 
    //the difference in Multilevel and Multiple is that 2 or more clsses are base classes
    string name;
    public:
    void display( string name){
        cout<<"The type of mammal is "<<getType()<<endl;
        getSize();
        cout<<"The name of husky is "<< name<<endl;
    }
};

int main(){
   Husky max;
    max.setType("carnivore");
    max.setSize("medium");
    max.display("Max");
    return 0;
}

