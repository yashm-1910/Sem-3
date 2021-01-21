#include<stdio.h>

int main(){
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array: ");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            int temp = arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }

    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}