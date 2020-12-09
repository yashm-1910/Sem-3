#include<stdio.h>
#include<stdlib.h>
typedef struct Board
{
   int N;
   int *board;
} Board;

void setBoard(Board *b, int n)
{
   int i,j;
   b->N=n;
   b->board = (int *)malloc(b->N * sizeof(int *));
   
   for(i=0;i<b->N;i++)
      b->board[i]=-1;
}
void printBaord(Board *b){
   int i,j;
   for(i=0;i<b->N;i++)
      printf("%d ",b->board[i]);
}
/* Returns 0 if placement of Queen in row, col position is valid looking backwards to all cell left of current col*/
int isSafe(Board b, int row, int col)
{
    int i,j;   
    printf("\nChecking placement %d %d \n",row,col); 
    /* Check this row on left side */
    for (i = 0; i < col; i++) 
        if (b.board[i] == row)
        { 
            printf("\nFailed to place %d %d \n",row,col);  
            return 1; 
         }  
    /* Check upper diagonal on left side */ 
    for (j = 1 ; col-j >0; j++) 
        if (b.board[abs(col-j)] == row)
        {
            printf("\nFailed to place %d %d \n",row,col);  
            return 1;
        }   
    return 0; 
}

/* A recursive utility function to solve N 
       Queen problem */
    int solveNQUtil(Board *b, int col) 
    { 
        printf("%d\n",col);    
        /* base case: If all queens are placed 
           then return true */
        if (col >= b->N) 
            return 0; 
  
        /* Consider this column and try placing 
           this queen in all rows one by one */
        for (int i = 0; i < b->N; i++) { 
                /* Check if the queen can be 
                   placed on board[i][col] */
                if (isSafe(*b, i, col)==0) {
                printf("\nPlacing Queen in: %d %d\n",i, col);  
                /* Place this queen in board ith row of col column */
                b->board[col] = i; 
  
                /* recurse to place rest of the queens */
                if (solveNQUtil(b, col + 1) == 0) 
                    return 0; 
  
                /* If placing queen in board[i][col] 
                   doesn't lead to a solution then 
                   remove queen from board[i][col] */
                b->board[col] = -1; // BACKTRACK 
            } 
        } 
  
        /* If the queen can not be placed in any row in 
           this colum col, then return false */
        return 1; 
    } 
  
    /* This function solves the N Queen problem using 
       Backtracking.  It mainly uses solveNQUtil () to 
       solve the problem. It returns false if queens 
       cannot be placed, otherwise, return true and 
       prints placement of queens in the form of 1s. 
       Please note that there may be more than one 
       solutions, this function prints one of the 
       feasible solutions.*/
int solveNQ(Board *b) 
{ 
        
        if (solveNQUtil(b, 0) == 1) { 
            printf("\nSolution does not exist.\n"); 
            return 1; 
        } 
        return 0; 
}

// driver program to test above function 
void main(int argc, char *argv[]) 
{ 
        Board b;
        //printf("Board size %s*%s",argv[1],argv[1]); 
        setBoard(&b,atoi(argv[1]));   
        printBaord(&b);
        printf("\n");   
        if(solveNQ(&b)== 0)
           printBaord(&b);
          
} 
