#include<stdio.h>
#include<malloc.h>

struct node {
    int id;
    struct node * next;
};
struct node *start, *new_node, *ptr;
int main()
{
    int n,k, round = 0;
    printf("\nEnter the number of players: ");
    scanf("%d",&n);
    printf("\nEnter the value after which each member is eliminated: ");
    scanf("%d",&k);

    start = (struct node*)malloc(sizeof(struct node));
    start->id = 1;

    ptr = start;
    for (int i = 2; i <= n; i++)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        ptr->next = new_node;
        new_node->id = i;
        new_node->next=start;
        ptr=new_node;
    }

    for (int count = n; count>1; count--)
    {
        for (int i = 0; i < k-1; i++)
        {
            ptr=ptr->next;
        }
        round++;
        printf("The player elininated in round %d is %d.\n",round,ptr->next->id);
        ptr->next=ptr->next->next;
    }
    printf("\nPlayer %d is the winner.",ptr->id);
    return 0;
}
