// C program to implement a Graph
#include <stdio.h>
#define MAX 5
int adj[MAX][MAX];

// function declaration
void creategraph(int size);
void displaygraph(int size);


// main function
int main()
{
    int option, size;
    do
    {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Create a graph");
        printf("\n 2. Display graph ");
        printf("\n 3. Exit ");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("\n Enter the number of the nodes in graph : ");
                scanf("%d", &size);
                creategraph(size);
                break;
            case 2:
                displaygraph(size);
                break;
        }
    }while(option!=3);
    return 0;
}

// function definition: creategraph
void creategraph(int size)
{
    int i, j;
    printf("\n Enter the adjacency matrix: ");
    for(i = 0; i < size; i++)
        for(j = 0; j < size; j++)
            scanf("%d", &adj[i][j]);

}
// function definition: creategraph
void displaygraph(int size)
{
    int i, j;
    printf("\n Graph with adjacency matrix representation: \n");
    for(i = 0; i < size; i++)
        printf("\t%c ", i+65); // print characters in rows
    for(i = 0; i < size; i++){
        printf("\n");
        printf("%c\t",i+65); // print characters in columns
        for(j = 0; j < size; j++)
            printf("%d \t", adj[i][j]);
    }
    
}
