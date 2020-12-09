// C program to implement hash table and collision resolution quadratic probing

#include <stdio.h>
#define MAX 12
int hashtbl[MAX];
int a[MAX];

// main function
int main()
{
    int i,j,m,hash;
    // load the array from user
    printf("\n Enter size of array:");
    scanf("%d", &m);
    printf("\n Enter the values in array:");
    for (i=0;i<m;i++)
        scanf("%d", &a[i]);
    
    // initialise the hash table
    //with values 999
    for (int i = 0; i < m; i++)
    {
        hashtbl[i]=999;
    }
    
    // apply hashing with linear probing
    for (i=0;i<m;i++)
    {
        j=0;
        do
        {
            hash=((a[i]%m)+j +2*j*j)%m;
            j++;
        }
        while(hashtbl[hash]!=999);
        hashtbl[hash] = a[i];
    }
    
    // display the hashtable
    //Display array hashtbl

    printf("\nDisplaying Hashtable:");
    printf("\n Index \t Key");
    for (int i = 0; i < m; i++)
    {
        printf("\n %d \t %d",i,hashtbl[i]);
    }
    
    return 0;
}