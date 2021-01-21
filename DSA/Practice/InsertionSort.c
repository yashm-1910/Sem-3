#include<stdio.h>
# define MAX 10

int main(){
    int j, size;
    int arr[MAX];
    printf("\nEnter the size of array less than 10.");
    scanf("%d",&size);
    printf("\nEnter the elements.");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j = j - 1; 
        }
        arr[j+1]=temp;
    }
    printf("\nThe sorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;

}