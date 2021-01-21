#include<stdio.h>
# define MAX 10

void quickSort(int [], int beg, int end);
int partition(int [], int beg, int end);

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
    quickSort(arr,0,size-1);
    printf("\nThe sorted array is: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}

void quickSort(int arr[], int beg, int end){
    int loc;
    if(beg<end)
    {
        loc = partition(arr,beg,end);
        quickSort(arr,beg,loc-1);
        quickSort(arr,loc+1,end); 
    }
}
int partition(int arr[], int beg, int end){
    int loc,left,right,flag=0;
    left = beg;
    loc = left;
    right = end;
    while (flag!=1)
    {
        while(arr[loc]<arr[right])
            right--;
        if(loc==right)
            flag =1;
        else if(arr[loc]>arr[right])
        {
            int temp = arr[right];
            arr[right]=arr[loc];
            arr[loc]=temp;
            loc = right;
        }
        if (flag!=1)
        {
            while(arr[left]<arr[loc])
                left++;
            if (loc==left)
                flag =1;
            else if(arr[left]>arr[loc]){
                int temp = arr[left];
                arr[left]=arr[loc];
                arr[loc]=temp;
                loc = left;
            }
        }
    }
    return loc;
}