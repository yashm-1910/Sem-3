#include<stdio.h>
#define MAX 100
int queue[MAX];
int front =-1;
int rear = -1;

void enqueue(int queue[]);
void dequeue(int queue[]);
void display(int queue[]);

int main(){
    int ch;
    do
    {
        printf("\nEnter 1 for enqueue.");
        printf("\nEnter 2 for dequeue.");
        printf("\nEnter 3 for display.");
        printf("\nEnter 4 for exit.");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            enqueue(queue);
            display(queue);
            break;
        case 2:
            dequeue(queue);
            display(queue);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            printf("Exitting!");
            break;
        default:
            break;
        }
    } while (ch!=4);
    
}

void enqueue(int queue[]){
    if (rear == MAX-1)
    {
        printf("\nOverflow");
    }
    else
    {
        int val;
        printf("\nEnter the value to be entered: ");
        scanf("%d",&val);
        if (front==-1)
        {
            front=rear=0;
            queue[rear]=val;
        }
        else
        {
            rear++;
            queue[rear]=val;
        }
        
    }
    
}
void dequeue(int queue[]){
    if (front==-1 || rear==-1)
    {
        printf("\nUnderflow.");
    }
    else
    {
        printf("The value to be deleted is: %d",queue[front]);
        for (int i = front; i < rear; i++)
        {
            queue[i]=queue[i+1];
        }
        rear--;
    }
}
void display(int queue[]){
    if (front==-1 || rear==-1)
    {
        printf("\nUnderflow.");
    }
    else
    {
        printf("\nDisplaying queue: ");
        for (int i = front; i <=rear; i++)
        {
            printf("%d\t",queue[i]);
        }
    }
}
