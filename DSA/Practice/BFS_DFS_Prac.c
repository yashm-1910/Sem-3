#include<stdio.h>
# define MAX 5

void breadth_first_search(int adj[][MAX],int visited[],int start);
void depth_first_search(int adj[][MAX],int visited[],int start);

int main(){
    
    int adj[MAX][MAX], visited[MAX]={0};
    int ch;
    do
    {
        printf("\n1 for entering matrix");
        printf("\n2 for BFS");
        printf("\n3 for DFS");
        printf("\n4 for exit");
        printf("\nEnter chioce: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the matrix: \n");
            for (int i = 0; i < MAX; i++)
            {
                for (int j = 0; j < MAX; j++)
                {
                    scanf("%d",&adj[i][j]);
                }
            }

            printf("\nDisplaying matrix: \n");
            for (int i = 0; i < MAX; i++)
            {
                printf("\t%c",i+65);
            }
            for (int i = 0; i < MAX; i++)
            {
                printf("\n");
                printf("%c",i+65);
                for (int j = 0; j < MAX; j++)
                {
                    printf("\t%d",adj[i][j]);
                }
            }
            break;
        case 2:
            printf("BFS Traversal: ");
            breadth_first_search(adj,visited,0);
            break;
        case 3:
            printf("DFS Traversal: ");
            depth_first_search(adj,visited,0);
            break;
        case 4:
            printf("Exitting!");
            break;
        default:
            break;
        }
    } while (ch!=4);
    
}
void breadth_first_search(int adj[][MAX],int visited[],int start){
    
    int front =-1, rear = -1;
    int queue[MAX];
    queue[++rear]=start;
    visited[start]=1;
    while (rear!=front)
    {
        start = queue[++front];
        printf("%c \t",start+65);

        for (int i = 0; i < MAX; i++)
        {
            if ((adj[start][i]==1)&&visited[i]==0)
            {
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        visited[i]=0;
    }
}
void depth_first_search(int adj[][MAX],int visited[],int start){
    int top = -1,i;
    int stack[MAX];
    stack[++top]=start;
    visited[start]=1;
    printf("%c \t",start + 65);
    while (top!=-1)
    {   
        start = stack[top];
        for (i = 0; i < MAX; i++)
        {
            if((adj[start][i]==1)&&visited[i]==0)
            {
                stack[++top]=i;
                printf("%c \t", i + 65);
                visited[i]=1;
                break;   
            }
        }
        if(i == MAX){
            top--;
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        visited[i]=0;
    }
}