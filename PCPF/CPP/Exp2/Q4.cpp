#include<iostream>
using namespace std;

// Base Class Saff
class staff
{
private:
    string code;
    string name;
public:
    string getCode(){ //To get employee code
        return code;
    }
    void setCode(){ //To save emp;oyee code
        string code;
        cout<<"Enter the employee code:";
        getline(cin,code);
        cout<<endl;
        this->code=code;
    }
    string getName(){ //To get employee name
        return name;
    }
    void setName(){ //To set Employee name
        string name;
        cout<<"Enter the employee Name:";
        getline(cin,name);
        cout<<endl;
        this->name=name;
    }
};

//Derived class teacher inherits base calss staff publically
class Teacher: public staff{

private:
    string subject;
    string publication;

public:
    string getSubject(){//To get subject
        return subject;
    }
    void setSubject(){//To set subject
        string subject;
        cout<<"Enter the employee subject:";
        getline(cin,subject);
        cout<<endl;
        this->subject=subject;
    }
    string getPublication(){//To get publication
        return publication;
    }
    void setPublication(){//To set publicaton
        string publication;
        cout<<"Enter the employee publication:";
        getline(cin,publication);
        cout<<endl;
        this->publication=publication;
    }
};

//Derived class typist inherits base calss staff publically
class typist: public staff{

private:
    int speed;
public:
    int getSpeed(){ //To get speed
        return speed;
    }
    void setSpeed(){//To set speed
        int speed;
        cout<<"Enter the typist speed:";
        cin>>speed;
        cout<<endl;
        this->speed=speed;
    }
};

//Derived class regular inherits base calss staff publically
class regular:public typist{

public:
    regular(){}
};

//Derived class casual inherits base calss typist publically
class casual:public typist{
private:
    float wages;
public:
    float getWages(){
        return wages;//To get wages
    }
    void setWages(){ //To set wages
        float wages;
        cout<<"Enter daily wages:";
        cin>>wages;
        cout<<endl;
        this->wages=wages;
    }
};

//Derived class officer inherits base calss staff publically
class officer:public staff{

private:
    int grade;
public:
    int getGrade(){ //To get grade
        return grade;
    }
    void setGrade(){ //To set grade
        int grade;
        cout<<"Enter officer garde:";
        cin>>grade;
        cout<<endl;
        this->grade=grade;
    }
};

int main(){

    Teacher teacher1;
    cout<<"Enter Teacher details"<<endl;
    teacher1.setName();
    teacher1.setCode();
    teacher1.setSubject();
    teacher1.setPublication();
    cout<<"Displaying teacher details:"<<endl;
    cout<<"Teacher name is:"<<teacher1.getName()<<endl;
    cout<<"Teacher code is:"<<teacher1.getCode()<<endl;
    cout<<"Teacher subject is:"<<teacher1.getSubject()<<endl;
    cout<<"Teacher publication is:"<<teacher1.getPublication()<<endl;

    regular rtypist;
    cout<<"\nEnter regular typist details"<<endl;
    rtypist.setName();
    rtypist.setCode();
    rtypist.setSpeed();
    cout<<"Displaying regular typist details"<<endl;
    cout<<"Typist name is:"<<rtypist.getName()<<endl;
    cout<<"Typist code is:"<<rtypist.getCode()<<endl;
    cout<<"Typist speed is:"<<rtypist.getSpeed()<<endl;

    casual ctypist;
    cout<<"\nEnter casual typist details"<<endl;
    cin.ignore();
    ctypist.setName();
    ctypist.setCode();
    ctypist.setSpeed();
    ctypist.setWages();
    cout<<"Displaying casual typist details"<<endl;
    cout<<"Typist name is:"<<ctypist.getName()<<endl;
    cout<<"Typist code is:"<<ctypist.getCode()<<endl;;
    cout<<"Typist speed is:"<<ctypist.getSpeed()<<endl;
    cout<<"Typist wage is:"<<ctypist.getWages()<<endl;

    officer officer;
    cout<<"Enter Officer Details:"<<endl;
    cin.ignore();
    officer.setName();
    officer.setCode();
    officer.setGrade();
    cout<<"Displaying Officer details:"<<endl;
    cout<<"Officer name is:"<<officer.getName()<<endl;
    cout<<"Officer code is:"<<officer.getCode()<<endl;;
    cout<<"Officer grade is:"<<officer.getGrade()<<endl;
    
    return 0;
}