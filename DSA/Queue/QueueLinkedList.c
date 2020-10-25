#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

struct node{
    int data;
    struct node *next;
};
struct queue{
    struct node *front;
    struct node *rear;
};

struct queue * q;

void create_queue(struct queue *);
struct queue *enqueue(struct queue *,int);
struct queue *dequeue(struct queue *);
void display(struct queue *);

int main(){

    int val, ch;
    q = (struct queue*)malloc(sizeof(struct queue));
    create_queue(q);
    do
    {
        printf("\nEnter\n1 to Insert \n2 to Delete \n3 to Display \n4 to Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("\nEnter the element:");
            scanf("%d",&val);
            q = enqueue(q,val);
            display(q);
            break;
        case 2:
            q = dequeue(q);
            display(q);
            break;
        case 3:
            display(q);
            break;
        default:
            break;
        }
    } while (ch != 4);
    return 0;
}

void create_queue(struct queue *q){
    
    q -> rear = NULL;
    q -> front = NULL;
}

struct queue *enqueue(struct queue *q,int val){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = val;
    if(q -> front != NULL){
        q -> rear -> next = new_node;
        q -> rear = new_node;
        q -> rear -> next = NULL;
    }
    else{
        q -> front = new_node;
        q -> rear = new_node;
        q -> front -> next = q -> rear -> next = NULL;
    }
    return q;
}

struct queue *dequeue(struct queue *q)
{
    struct node *new_node;
    new_node = q -> front;
    if(q -> front != NULL){
        q -> front = q -> front -> next;
        printf("\n The value being deleted is : %d", new_node -> data);
        free(new_node);
    }
    else
         printf("\n UNDERFLOW Queue is empty");
    return q;
}

void display(struct queue *q){
    struct node *new_node;
    new_node = q -> front;
    if(new_node != NULL){
        printf("\nQueue: ");
        while(new_node!=q -> rear){
            printf("%d ", new_node -> data);
            new_node = new_node -> next;
        }
        printf("%d ", new_node -> data);
    }
    else
        printf("\n UNDERFLOW QUEUE IS EMPTY");
}
