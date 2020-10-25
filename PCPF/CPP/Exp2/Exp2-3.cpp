/*
WAP to implement multilevel inheritance
*/

//Multi Level inheritance

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
//Define class Dog from Mammal
class Dog: public Mammal{
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
//Define class Husky from Dog

class Husky: public Dog {
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

