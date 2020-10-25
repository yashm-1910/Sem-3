/*
2. WAP to perform shopping operations. The shopping operations should be able to perform-
Enter the price of item Code number of the item
Provide an option to –add more items to the list, delete item from list, and print the total value
of products.
*/

#include<iostream>
using namespace std;

class ShoppingList
{
private:
    //Declaring a singly linked list
    struct List{
        string name;
        string code;
        int price;
        struct List * next;
    };
    struct List * start = NULL;
public:
    //Declaring list functions
    ShoppingList();
    ~ShoppingList();
    void add_to_list(string iname, string icode, int iprice);
    void delete_from_list(string icode);
    void display();
    void display_total();
};

//Constructor
ShoppingList::ShoppingList()
{
}

//Destructor
ShoppingList::~ShoppingList()
{
}

//To insert elements in the begning of the list
void ShoppingList::add_to_list(string iname, string icode, int iprice)
{
    struct List * new_item = new List;
    new_item->name = iname;
    new_item->code = icode;
    new_item->price = iprice;
    new_item->next = start;
    start = new_item;
    display();
}

//To delete a given item of the list
void ShoppingList::delete_from_list(string icode)
{
    struct List * ptr, *preptr;
    ptr = start;
    if (ptr->code == icode)
    {
        start = start -> next;
    }
    else
    {
        while(ptr -> code != icode)
        {
            preptr = ptr;
            ptr = ptr -> next;
        }
        preptr -> next = ptr -> next;
    }
    cout<<"Deleted:"<<ptr->name<<ptr->code<<ptr->price<<endl;
    delete ptr;
    display();
}

//To display all the items in the list
void ShoppingList::display(){

    struct List * ptr;
    ptr = start;
    cout<<"Displaying:"<<endl;
    while (ptr != NULL)
    {
        cout<<ptr->name<<"\t"<<ptr->code<<"\t"<<ptr->price<<endl;
        ptr = ptr -> next;
    }
    
}

//To display the total amount
void ShoppingList::display_total(){

    struct List * ptr;
    ptr = start;
    int total=0;
    while (ptr != NULL)
    {
       total+=ptr->price;
        ptr = ptr -> next;
    }
    cout<<"Total price:"<<total<<endl;
}

int main(){

    //Initializing the object of class
    ShoppingList item;

    string name,code;
    int price,num;
    
    //Menu driven program
    do
    {
        cout<<"\nEnter"<<endl;
        cout<<"1 to add in list\n2 to delete from list\n3 to display the list\n4 to display the total amount\n5 to exit"<<endl;
        cout<<"Enter your choice:";
        cin>>num;
        cout<<endl;
        switch (num)
        {
        case 1:
            cout<<"Enter the name of the item:";
            cin>>name;
            cout<<endl;
            cout<<"Enter the code of the item:";
            cin>>code;
            cout<<endl;
            cout<<"Enter the price of the item:";
            cin>>price;
            cout<<endl;
            item.add_to_list(name,code,price);
            break;
        case 2:
            cout<<"Enter the code of the item you want to delete:";
            cin>>code;
            item.delete_from_list(code);
            break;
        case 3:
            item.display();
            break;
        case 4:
            item.display_total();
            break;
        default:
            break;
        }
    } while (num<5);
    return 0;
}