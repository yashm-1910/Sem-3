#include<stdio.h>

void quickSort(int arr[],int beg,int end);
int partition(int arr[],int beg, int end);
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
    quickSort(arr,0,size-1);
    printf("\nThe sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}

void quickSort(int arr[],int beg,int end){
    int loc;
    if (beg<end)
    {
        loc = partition(arr,beg,end);
        quickSort(arr,beg,loc-1);
        quickSort(arr,loc+1,end);
    }
}

int partition(int arr[], int beg, int end){
    int loc,left,right,flag=0;
    loc = left = beg;
    right = end;
    while (flag==0)
    {
        while(arr[loc]<=arr[right]&&loc!=right)
        {
            right--;
        }
        if (loc==right)
        {
            flag=1;
        }
        else if (arr[loc]>arr[right])
        {
            int temp = arr[right];
            arr[right]=arr[loc];
            arr[loc]=temp;
            loc = right;
        }
        if (flag == 0)
        {
            while(arr[loc]>=arr[left]&&loc!=left)
            {
                left++;
            }
            if (loc==left)
            {
                flag=1;
            }
            else if (arr[loc]<arr[left])
            {
                int temp = arr[left];
                arr[left]=arr[loc];
                arr[loc]=temp;
                loc = left;
            }
        }
        
    }
    return loc;
}