#include<stdio.h>

int main(){
    int size;
    printf("\nEnter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);  
    }
    for (int i = 1; i < size; i++)
    {
        int j = i-1;
        int temp = arr[i];
        while (temp<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}