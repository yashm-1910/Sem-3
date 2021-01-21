#include<stdio.h>
#define MAX 5

int adj[MAX][MAX];

void create(int size);
void  display(int size);

int main(){
    int ch,size;
    do
    {
        printf("\n1 to create matrix");
        printf("\n2 to display matrix");
        printf("\n3 to exit");
        printf("\nEnter your choice.");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the size of matrix: ");
            scanf("%d",&size);
            create(size);
            break;
        case 2:
            display(size);
            break;
        case 3:
            printf("\nExitting!");
            break;
        default:
            break;
        }
    } while (ch!=3);
    
}

void create(int size){
    
    printf("\nEnter the adjacency matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d",&adj[i][j]);
        }
        
    }
}
void  display(int size){
    for (int i = 0; i < size; i++)
    {
        printf("\t%c",i+65);
    }
    for (int i = 0; i < size; i++)
    {
        printf("\n");
        printf("%c",i+65);
        for (int j = 0; j < size; j++)
        {
            printf("\t%d",adj[i][j]);
        }   
    }
}