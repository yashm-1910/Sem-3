#include<stdio.h>

void MregeSort(int arr[], int beg, int end);
void merge(int arr[], int beg, int mid, int end);

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
    MregeSort(arr,0,size-1);
    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

void MregeSort(int arr[], int beg, int end){
    int mid = (beg+end)/2;
    if (beg<end)
    {
        MregeSort(arr,beg,mid);
        MregeSort(arr, mid+1, end);
        merge(arr, beg, mid, end);
    }
}
void merge(int arr[], int beg, int mid, int end){
    int i = beg,j = mid+1,k=beg, brr[end+1];
    while (i<=mid && j<=end)
    {
        if (arr[i]<arr[j])
        {
            brr[k]=arr[i];
            i++;
        }
        else
        {
            brr[k]=arr[j];
            j++;
        }
        k++;
    }
    if (i>mid)
    {
        while (j<=end)
        {
            brr[k]=arr[j];
            j++;
            k++;
        }
        
    }
    else if(j>end)
    {
        while (i<=mid)
        {
            brr[k]=arr[i];
            i++;
            k++;
        }
    }
    for (int i = beg; i <= end; i++)
    {
        arr[i]=brr[i];
    }

}
