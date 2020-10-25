#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack {

    int data;
    struct stack *next;
};

struct stack * top = NULL;

struct stack *push(struct stack *top, int val);
struct stack *pop(struct stack *top);
void peak(struct stack *top);
void display(struct stack *top);


int main(){
   
    int ch, val;

    do
    {   printf("\nEnter\n1 to Push \n2 to Pop \n3 to Peek \n4 to display \n5 to exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter the element:");
            scanf("%d",&val);
            top = push(top,val);
            display(top);
            break;
        case 2:
            top = pop(top);
            display(top);
            break;
        case 3:
            peak(top);
            break;
        case 4:
            display(top);
            break;

        default:
            break;
        }
    } while (ch != 5);
    
    return 0;
}

struct stack *push(struct stack *top, int val){
    struct stack *new_node;
    new_node = (struct stack *)malloc(sizeof(struct stack));
    new_node -> data = val;
    
    if (top != NULL)
    {
        new_node -> next = top;
        top = new_node;
    }
    else{
        new_node -> next = NULL;
        top = new_node;
    }
    return top;
}

struct stack *pop(struct stack *top){
    if (top !=NULL){   
        struct stack *ptr;
        ptr = top;
        printf("\n The value being deleted is : %d",ptr->data);
        top = top -> next;
        free(ptr);
        
    }
    else{
        printf("\n UNDERFLOW Queue is empty");
    }
    return top;
}

void peak(struct stack *top){
    
    if (top !=NULL)
    {   
        struct stack *ptr;
        ptr = top;
        printf("\n Top: %d",ptr->data);
        
    }
    else{
        printf("\n UNDERFLOW Queue is empty");
    }
    
}

void display(struct stack *top){
    if (top !=NULL)
    {
        struct stack *ptr;
        ptr = top;
        printf("\nStack: ");
         while(ptr != NULL){
            printf("%d ", ptr -> data);
            ptr = ptr -> next;
        }
    }
    else{
        
        printf("\n UNDERFLOW Queue is empty");
    }
    
}