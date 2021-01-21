#include<stdio.h>

int main(){

    int size;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the sorted array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int beg = 0, end = size-1;
    int mid = (beg+end)/2;
    int search;
    printf("\nEnter the value to be searched: ");
    scanf("%d",&search);
    int flag =0;
    while (beg<end)
    {
        if (search == arr[mid])
        {
            printf("\nFound %d at %d.",search,mid);
            flag++;
            break;
        }
        else if (search<arr[mid])
        {
            end = mid-1;
            mid = (beg+end)/2;
        }
        else
        {
            beg =  mid + 1;
            mid = (beg+end)/2;
        }
    }
    if (flag==0)
    {
        printf("\n%d not found.",search);
    }
    
    return 0;
}