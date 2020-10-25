//Singly Linked List

#include <stdio.h>
#include<stdlib.h>
#include <malloc.h>

//Linked List Implementation
struct  node
{
	int data;
	struct node * next;
};

//set the start pointer to null, start will point to the first node of linked list
struct node * start = NULL;

//Function prototypes
void display(struct node * start);
int count(struct node * start);
void search(struct node * start, int value);
struct node * sort(struct node * start);

struct node * insert_begin(struct node * start);
struct node * insert_end(struct node * start);
struct node * insert_before(struct node * start);
struct node * insert_after(struct node * start);

struct node * delete_begin(struct node * start);
struct node * delete_end(struct node * start);
struct node * delete_node(struct node * start);

int main(){

	return 0;
}

void display(struct node * start){

	struct node * ptr;
	ptr = start;
	while(ptr != NULL){
		printf("%d\t",ptr->data);
		ptr = ptr -> next;
	}
}

int count(struct node * start){

	int count = 0;
	struct node * ptr = start;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	printf("There are %d nodes in the list",count);
	return count;
}

struct node * sort(struct node * start){
	
	struct node * ptr1, * ptr2;
	int temp;
	ptr1 = start;
	while (ptr1->next != NULL)
	{
		ptr2 = ptr1->next;
		while (ptr2 != NULL)
		{
			if (ptr1->data > ptr2->data)
			{
				temp = ptr1->data;
				ptr1-> data = ptr2->data;
				ptr2->data = temp;
			}
			ptr2=ptr2->next;
		}
		ptr1 = ptr1->next;
	}
	display(start);
	return start;
}

void search(struct node * start, int value){

	int position = 0;
	struct node * ptr;
	while(ptr != NULL){

		if(ptr->data = value){
			printf("%d found at position %d",value,position);
			break;
		}
		else{
			ptr = ptr->next;
			position++;
		}
	}
	if(position == 0){
		printf("%d not found at position",value);
	}
}

struct node * insert_begin(struct node * start){

	struct node * new_node = malloc(sizeof(struct node));
	printf("Enter the value to be inserted:");
}