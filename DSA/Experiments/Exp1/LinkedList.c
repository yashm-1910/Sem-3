#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


struct node
{
    int data;
    struct node* next;
};

struct node *start = NULL;

struct node *display(struct node *start){

    if (start==NULL)
    {
        printf("\n The list is empty");
    }
    else
    {   
       printf("\n The elements of list are:-\n"); 
       struct node *ptr;
        ptr = start;
        while(ptr != NULL){
            printf(" %d\t", ptr -> data);
            ptr = ptr -> next;
        }
    }
    printf("\n");
    return start;
}

struct node *insert_beg(struct node *start){

    struct node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start){

    if (start==NULL){
       printf("\n The list is empty");
    }
    else{     
        struct node  *ptr, *new_node;
        int num;
        printf("\n Enter the data : ");
        scanf("%d", &num);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = num;
        new_node -> next = NULL;
        ptr = start;
        while (ptr -> next != NULL)
            ptr = ptr -> next;
        ptr -> next = new_node;
    }
    return start;
}

struct node *insert_after(struct node *start){

    if (start==NULL){
       printf("\n The list is empty");
    }
    
    else{
        struct node *new_node, *ptr, *preptr;
        int num, val;
        printf("\n Enter the data : ");
        scanf("%d", &num);
        printf("\n Enter the value after which the data has to be inserted : ");
        scanf("%d", &val);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node -> data = num;
        ptr = start;
        
        while(preptr -> data != val)
        {
            preptr = ptr;
            ptr = ptr -> next;
        }
        preptr -> next=new_node;
        new_node -> next = ptr;
    }
    return start;
}

struct node *delete_beg(struct node *start){
    if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else{
        struct node *ptr;
        ptr =start;
        start = start -> next;
        free(ptr);
    }
    return start;
}

struct node *delete_end(struct node *start){

     if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else{
        struct node *ptr, *preptr;
        ptr = start;
        while(ptr -> next != NULL)
        {
            preptr = ptr;
            ptr = ptr -> next;
        }
        preptr -> next = NULL;
        free(ptr);
    }
    return start;
}

struct node *delete_node(struct node *start){

     if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else{
        struct node *ptr, *preptr;
        int val;
        printf("\n Enter the node to be deleted:");
        scanf("%d",&val);
        ptr = start;
        if(ptr -> data == val){
            start = delete_beg(start);
            return start;
        }
        else{
            while(ptr -> data != val){
                preptr = ptr;
                ptr = ptr -> next;
            }
            preptr -> next = ptr -> next;
            free(ptr);
        }
    }
    return start;
}

int main(){
    int ch;
    do
    {
        printf("\nEnter 1 for Displaying");
        printf("\nEnter 2 for Inserting at beginning");
        printf("\nEnter 3 for Inserting at end");
        printf("\nEnter 4 for Inserting after given value");
        printf("\nEnter 5 for Deleting first node");
        printf("\nEnter 6 for Deleting last node");
        printf("\nEnter 7 for Deleting node");
        printf("\nEnter 8 for Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1: start = display(start);
                break;
            case 2: start = insert_beg(start);
                start = display(start);
                break;    
            case 3: start = insert_end(start);
                start = display(start);
                break;
            case 4: start = insert_after(start);
                start = display(start);
                break;
            case 5: start = delete_beg(start);
                start = display(start);
                break;
            case 6: start = delete_end(start);
                start = display(start);
                break; 
            case 7: start = delete_node(start);
                start = display(start);
                break;                
            default:
                break;
            }
    } while (ch !=8);
    
    return 0;
}