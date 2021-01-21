#include<stdio.h>

int main(){
    int size;
    
    printf("\nEnter the size of the arry: ");
    scanf("%d",&size);
    int  arr[size];
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);   
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }   
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}