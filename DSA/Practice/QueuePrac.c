#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node * next;
};

struct queue{
    struct node * front;
    struct node * rear;
};

struct queue *q;

void create(struct queue *q);
struct queue * enqueue(struct queue *q);
struct queue * dequeue(struct queue *q);
void display(struct queue *q);

int main(){

    int ch;
    q = (struct queue *)malloc(sizeof(struct queue));
    create(q);
    do
    {
        printf("\n1 for enqueue.");
        printf("\n2 for dequeue.");
        printf("\n3 for display.");
        printf("\n4 for exit.");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            q=enqueue(q);
            break;
        case 2:
            q = dequeue(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            printf("Exitting!");
            break;
        default:
            break;
        }
    } while (ch!=4);
}

void create(struct queue * q){
    q->front =NULL;
    q->rear=NULL;
}

struct queue * enqueue(struct queue * q){
    int val;
    struct node * new_node;
    printf("\nEnter the value to be entered: ");
    scanf("%d",&val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    if (q->front ==NULL )
    {
        q->front = q->rear = new_node;
        q -> front -> next = q -> rear -> next = NULL;
    }
    else{
        q -> rear -> next = new_node;
        q -> rear = new_node;
        q -> rear -> next = NULL;
    }
    display(q);
    return q;
}
struct queue * dequeue(struct queue * q){
    if (q->front == NULL)
    {
        printf("\nUnderflow cannot delete from empty queue");
    }
    else{
        struct node * ptr;
        ptr = q->front;
        printf("\nThe element to be deleted is: %d", ptr->data);
        q->front = q->front->next;
        free(ptr);
        display(q);
    }
    return q;
}
void display(struct queue * q){
    if (q->front == NULL)
    {
        printf("\nUnderflow cannot display empty queue");
    }
    else{
        struct node * ptr;
        ptr = q->front;
        printf("\nDisplaying queue: ");
        while (ptr!=q->rear->next)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->next;
        }
    }
}