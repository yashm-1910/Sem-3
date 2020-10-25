/* Name of depositor, account number, type of account, balance amt. in account Member functions 
To assign initial values, to deposit an amount, to withdraw an amount after checking the  balance, to display name and balance 
*/

#include<iostream>
using namespace std;

//Clas declaration
class Account{

//Private datta members
private:
    string name;
    float balance;
    int account_number;
    string type;

//public member functions
public:
    void setData(string name, float balance, int account_number, string type);
    void deposit(float amount);
    void withdraw(float amount);
    void display();
};

//Function to set values of depositor name, balance, account number and account tyoe given by user
void Account::setData(string name, float balance, int account_number, string type){

    this-> name = name;
    this-> balance = balance;
    this-> account_number = account_number;
    this-> type = type;
}

//Function to deposit amount to the account
void Account::deposit(float amount){

    if (amount>0)
    {
        balance+=amount;
        cout<<amount<<" deposited."<<endl;
    }
    else
    {
        cout<<"Enter valid amount."<<endl;
    }
    cout<<"Your balance is:"<<balance<<"."<<endl;
}

//Function to withdraw amount from the account
void Account::withdraw(float amount){

    cout<<"Your balance is:"<<balance<<"."<<endl;
    if (amount>0 && (balance-amount)>=100) //if amount to be withdrawed is greater than 0 and the difference between balance and amount is greater than minimum balance then withdraw
    {
        balance-=amount;
        cout<<amount<<" withdrawed."<<endl;
    }
    else if (balance-amount<100)//minimum balance of 100 required message
    {
        cout<<"You cannot withdraw, minimum balance of 100 required."<<endl;
    }
    else //incorrect amount entered
    {
        cout<<"Enter valid amount."<<endl;
    }
    cout<<"Your balance is:"<<balance<<"."<<endl;
}

void Account::display(){

    cout<<"Displaying account details"<<endl;
    cout<<"Account Holder name is:"<<name<<endl;
    cout<<"Account number:"<<account_number<<endl;
    cout<<"Your current balance is:"<<balance<<endl;
    cout<<"Account type is:"<<type<<endl;
}

int main(){

    int num, account_number;
    string name, type;
    float balance, amount;
    
    Account a;
    cout<<"Enter Bank details:"<<endl;
    cout<<"Enter Your name, account number, balance, account type:";
    cin>>name>>account_number>>balance>>type;
    cout<<endl;
    a.setData(name,balance,account_number,type);
    do
    {   cout<<"Enter"<<endl<<"1 to display account details"<<endl<<"2 to deposit amount in your account"<<endl<<"3 to withdraw amount from your accuont"<<endl<<"4 to exit"<<endl;
        cout<<"Enter your choice:";
        cin>>num;
        cout<<endl;
        switch (num)
        {
        case 1:
            a.display();
            break;
        case 2:
            cout<<"Enter the amount to be deposited:";
            cin>>amount;
            cout<<endl;
            a.deposit(amount);
            break;
        case 3:
            cout<<"Enter the amount to be withdrawed:";
            cin>>amount;
            cout<<endl;
            a.withdraw(amount);
            break;        
        
        default:
            break;
        }
    } while (num<4);


    return 0;

}