#include<stdio.h>
#define MAX 10
int hashtbl[MAX];
int a[MAX];

int main(){
    int size,hash;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("\nEnter the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        hashtbl[i]=-1;
    }
    for (int i = 0; i < size; i++)
    {   
        int j = 0;
        do
        {
            hash = (a[i]%size+j)%size;
            j++;
        } while (hashtbl[hash]!=-1);
        hashtbl[hash]=a[i];
    }
    
    printf("\nDisplaying hash table: ");
    printf("\nIndex\tKey");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d\t%d",i,hashtbl[i]);
    }
}