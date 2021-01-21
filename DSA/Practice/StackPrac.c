#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

struct stack{
    int data;
    struct stack * next;
};

struct stack * top =NULL;

struct stack * push(struct stack * top);
struct stack * pop(struct stack * top);
void peak(struct stack * top);
void display(struct stack * top);
bool isEmpty(struct stack * top);

int main(){
    int ch;
    do
    {
        
        printf("\n1 for push");
        printf("\n2 for pop");
        printf("\n3 for peak");
        printf("\n4 for display");
        printf("\n5 for exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            peak(top);
            break;
        case 4:
            display(top);
            break;
        case 5:
            printf("\nExittig!");
            break;
        default:
            break;
        }
    } while (ch!=5);
    return 0;
}

bool isEmpty(struct stack * top){
    return (top==NULL)?true:false;
}

void display(struct stack * top){
    if(isEmpty(top)){
        printf("\nThe stack is empty. UNDERFLOW");
    }
    else{
        struct stack * ptr;
        ptr = top;
        printf("\nDiaplaying the stack: ");
        while (ptr!=NULL)
        {
            printf("%d \t",ptr->data);
            ptr=ptr->next;
        }
    }
}
struct stack * push(struct stack * top){
    struct stack * new_node, *ptr;
    int val;
    printf("\nEnter the value to be entered: ");
    scanf("%d",&val);
    new_node = (struct stack *)malloc(sizeof(struct stack));
    new_node->data = val;

    if(isEmpty(top)){
        new_node -> next = NULL;
        top = new_node;
    }
    else{
        new_node->next=top;
        top = new_node;
    }
    display(top);
    return top;
}
struct stack * pop(struct stack * top){
    if(isEmpty(top)){
        printf("\nStack Empty. UNDERFLOW");
    }
    else{
        struct stack * ptr;
        ptr = top;
        printf("\nThe value being deleted is: %d", ptr->data);
        top = top-> next;
        free(ptr);
    }
    return top;
}

void peak(struct stack * top){
    if(isEmpty(top)){
        printf("\nStack Empty. UNDERFLOW");
    }
    else{
        struct stack * ptr;
        ptr = top;
        printf("\nThe value at top is: %d", ptr->data);
    }
}