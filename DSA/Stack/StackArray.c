#include<stdio.h>
# define MAX 5
int stack[MAX];
int top = -1;

void push(int stack[]);
void pop(int stack[]);
void peak(int stack[]);
void display(int stack[]);

int main(){
    int ch;
    do
    {
        printf("\nEnter 1 for push.");
        printf("\nEnter 2 for pop.");
        printf("\nEnter 3 for peak.");
        printf("\nEnter 4 for display.");
        printf("\nEnter 5 for exit.");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push(stack);
            display(stack);
            break;
        case 2:
            pop(stack);
            display(stack);
            break;
        case 3:
            peak(stack);
            break;
        case 4:
            display(stack);
            break;
        case 5:
            printf("\nExitting.");
            break;
        
        default:
            break;
        }
    } while (ch!=5);
    
}
void push(int stack[]){
    if (top==MAX-1)
    {
        printf("\nStack overflow.");
    }
    else
    {
        int val;
        printf("\nEnter the value to be entered: ");
        scanf("%d",&val);
        stack[++top]=val;
    }
    //return stack;
}
void pop(int stack[]){
    if (top==-1)
    {
        printf("\nStack underflow.");   
    }
    else
    {   
        printf("\nThe value to be deleted is: ");
        printf("%d",stack[top]);
        top--;
    }
    //return stack;
}
void peak(int stack[]){
    if (top==-1)
    {
        printf("\nStack underflow.");   
    }
    else
    {
        printf("The value at the top is: ");
        printf("%d",stack[top]);
    }
}

void display(int stack[]){
    if (top==-1)
    {
        printf("\nStack underflow.");   
    }
    else{
        printf("\nDisplaying the stack: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
