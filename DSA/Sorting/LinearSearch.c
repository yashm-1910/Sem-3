#include<stdio.h>

int main(){
    int arr[10],search,flag=0;
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d",&search);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==search)
        {
            printf("\nFound %d at %d",search,i+1);
            flag++;
            break;
        }
    }
    if (flag==0)
    {
        printf("\n%d not found.",search);
    }
    
    return 0;
}