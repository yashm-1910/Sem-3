//Write a C++ program to demonstrate hierarchical inheritance 

#include<iostream>
using namespace std;

//Base Class
class Shape{
    
    //private data members x,y
    private:
    float x,y;
    
    public:
    //function to set value of x
    void setX(float x){
        this->x = x;
    }
    
    //function to set value of y
    void setY(float y){
        this->y = y;
    }
    
    //function to get value of x
    float getX(){
        return x;
    }

    //function to get value of y
    float getY(){
        return y;
    }

};

//Derived class square
class Square : public Shape{

    //private data member area
    private:
    float area;
    
    public:
    Square(float side){
        setX(side); //using public methods to set values of private variables x
    }

    //Function to diaplay area
    void displayArea(){
        area = getX()*getX();
        cout<<"The area of square is: " << area << endl;
    }

};

//Derived class rectangle
class Rectangle : public Shape{

    //private data member area
    private:
    float area;
    
    public:
    //Setting values of length and breadth
    Rectangle(float length, float breadth){
        setX(length);//using public methods to set values of private variables x and y
        setY(breadth);
    }

    //Function to diaplay area
    void displayArea(){
        area = getX()*getY();
        cout<<"The area of rectangle is is: " << area << endl;
    }
};

//Derived class triangle
class Triangle : public Shape{
    
    //private data member area
    private:
    float area;
    
    public:
    //Setting values of base and height
    Triangle(float base, float height){
        setX(base); //using public methods to set values of private variables x and y
        setY(height);
    }

    //Function to diaplay area
    void displayArea(){
        float area = 0.5*getX()*getY();
        cout<<"The area of triangle is is: " << area << endl;
    }
};

//Driver code
int main(){
    
    float side, length, breadth, base, height;

    cout<<"Enter side of square:"<<endl;
    cin>>side;
    //Object of square class
    Square sq(side);
    sq.displayArea();

    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>length>>breadth;
    //object of class rectangle
    Rectangle rect(length,breadth);
    rect.displayArea();

    cout<<"Enter base and height of triangle:"<<endl;
    cin>>base>>height;
    //Object of class triangle
    Triangle tri(base,height);
    tri.displayArea();

    return 0;
}