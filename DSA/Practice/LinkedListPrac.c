#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{

    int data;
    struct node * next;
};

struct node * start = NULL;

struct node * insertBeg(struct node * start);
struct node * insertEnd(struct node * start);
struct node * insertAfter(struct node * start);
struct node * insertBefore(struct node * start);
struct node * deleteNode(struct node * start);
struct node * deleteBeg(struct node * start);
struct node * deleteEnd(struct node * start);
void display(struct node * start);
void search(struct node * start);

int main(){
    int ch;
    do
    {
        printf("\n1 for display.");
        printf("\n2 for search.");
        printf("\n3 for insert begning.");
        printf("\n4 for insert end.");
        printf("\n5 for insert after.");
        printf("\n6 for insert before.");
        printf("\n7 for delete begning.");
        printf("\n8 for delete node.");
        printf("\n9 for delete end.");
        printf("\n10 for exit.");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            display(start);
            break;
        case 2:
            search(start);
            break;
        case 3:
            start = insertBeg(start);
            break;
        case 4:
            start = insertEnd(start);
            break;
        case 5:
            start = insertAfter(start);
            break;
        case 6:
            start = insertBefore(start);
            break;
        case 7:
            start = deleteBeg(start);
            break;
        case 8:
            start = deleteNode(start);
            break;
        case 9:
            start = deleteEnd(start);
            break;
        case 10:
            printf("\nExitting!");
            break;
        default:
            break;
        }
    } while (ch!=10);
    
}

void display(struct node * start){
    if (start == NULL)
    {
        printf("\n The list is empty.");
    }
    else{
        struct node * ptr;
        ptr = start;
        while (ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
    
}

void search(struct node * start){
    if (start == NULL)
    {
        printf("\n The list is empty.");
    }
    else{
        int num, flag =0;
        printf("\nEnter the to be searched:");
        scanf("%d",&num);
        struct node * ptr;
        ptr = start;
        while (ptr!=NULL)
        {   
            if (ptr->data == num)
            {
                printf("\nFound: %d",num);
                flag++;
                break;
            }
            ptr = ptr->next;
        }
        if (flag==0)
        {
            printf("\n%d not found.",num);
        }
        printf("\n");
    }
}
struct node * insertBeg(struct node * start){
    
    struct node * new_node;
    int num;
    printf("\nEnter the data:");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node ->data = num;
    new_node->next=start;
    start = new_node;
    display(start);
    return start;

}

struct node * insertEnd(struct node * start){
    
    if (start==NULL){
       printf("\n The list is empty");
    }
    else{
        struct node * new_node, *ptr;
        int num;
        printf("\nEnter the data:");
        scanf("%d",&num);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node ->data = num;
        new_node->next=NULL;
        ptr = start;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
    }
    display(start);
    return start;    

}
struct node * insertAfter(struct node * start){
    if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else
    {
        struct node *new_node, *ptr, *prePtr;
        int num, val;
        printf("Enter the value to be entered: ");
        scanf("%d",&num);
        printf("Enter the value after which the new value is to be entered: ");
        scanf("%d",&val);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        ptr = start;
        while (prePtr->data != val)     
        {
            prePtr = ptr;
            ptr = ptr->next;
        }
        prePtr->next=new_node;
        new_node->next=ptr;
    }
    display(start);
    return start;
    
}
struct node * insertBefore(struct node * start){
    if (start == NULL)
    {
        printf("\n The list is empty");
    }
    else
    {
        struct node *new_node, *ptr, *prePtr;
        int num, val;
        printf("Enter the value to be entered: ");
        scanf("%d",&num);
        printf("Enter the value before which the new value is to be entered: ");
        scanf("%d",&val);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        ptr = start;
        if (ptr->data == val)
        {
            new_node->next=ptr;
            start = new_node;
        }
        else{
            while (ptr->data != val)     
            {
                prePtr = ptr;
                ptr = ptr->next;
            }
            prePtr->next=new_node;
            new_node->next=ptr;
        }
    }
    display(start);
    return start;
}
struct node * deleteBeg(struct node * start){
    struct node *ptr;
    if (start == NULL)
    {
        printf("\nList is empty");
    }
    else
    {   
        ptr = start;
        start = start->next;
        printf("The value being deleted is: %d\n", ptr->data);
        free(ptr);
    }
    display(start);
    return start;
}
struct node * deleteNode(struct node * start){
    struct node *ptr, *prePtr;
    int num;
    if (start==NULL)
    {
        printf("\nList is empty.");
    }
    else
    {   
        printf("Enter the number to be deleted: ");
        scanf("%d",&num);
        ptr = start;
        if (ptr->data==num)
        {
            start = deleteBeg(start);
            return start;
        }
        while (ptr->data != num)
        {
            prePtr=ptr;
            ptr=ptr->next;
        }
        printf("The number being deleted is: %d\n",ptr->data);
        prePtr->next=ptr->next;
        free(ptr);
    }
    display(start);
    return start;
}
struct node * deleteEnd(struct node * start){
    if (start == NULL)
    {
        printf("\nThe list is empty.");
    }
    else{
        struct node *ptr,*prePtr;
        ptr = start;
        while(ptr->next!=NULL){
            prePtr = ptr;
            ptr = ptr->next;
        }
        prePtr->next = NULL;
        printf("The value being deleted is: %d\n", ptr->data);
        free(ptr);
    }
    display(start);
    return start;
}