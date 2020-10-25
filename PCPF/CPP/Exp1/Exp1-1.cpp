/*
WAP to create class item having the following details- two private members to store the
fetched data from user. Two public functions get_data() and put_data() to fetch the data and
display the fetched data. Access the class members from main by creating its objects
*/

#include<iostream>
using namespace std;

//Class item
class item{

private:
	//Private members of class item
	string name;
	int price;
public:
	//Public member functions of class item

	//Function to get values of item name and price
	void get_data(string name,int price){
		this -> name = name;
		this -> price = price;
	}
	//Function to display item name and item price
	void put_data(){
		cout<<"The name of item is: "<<name<<endl;
		cout<<"The price of item is: "<<price<<endl;
	}
};

int main(){
	
	//Initializing object of class item
	item i;
	//Function get_data called
	i.get_data("rice",40);
	//Function put_data called
	i.put_data();

	item j;
	j.get_data("bread",20);
	j.put_data();
	return 0;
}