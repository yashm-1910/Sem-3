// C program to implement Insertion sort and Quick sort algorithms
#include <stdio.h>
#define MAX 10
int A[MAX];


// function declaration
//Mention all functions declarations
void insertionSort(int arr[], int n);
void createArray(int size);
void quickSort(int arr[], int beg, int end);
int partition(int a[], int beg, int end);
void displayArray(int size);


// main function
int main()
{
    int option, size;
    //int n = size/sizeof(A[0]);
    do
    {
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Enter values in array");
        printf("\n 2. Insertion sort ");
        printf("\n 3. Quick sort ");
        printf("\n 4. Display array");
        printf("\n 5. Exit ");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option)
        {
            case 1: printf("\n Enter the array size : ");
                    scanf("%d", &size);
                    createArray(size);
                    break;
            case 2: insertionSort(A, size);
                    displayArray(size);
                    break;
            case 3: quickSort(A, 0, size-1);
                    displayArray(size);
                    break;
            case 4: displayArray(size);
                    break;
        }
    }while(option!=5);
    
    return 0;
}

void createArray(int size){
    if(size<=10){
        printf("\nEnter the elements of the array:");
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&A[i]);
        }
    }
    else{
        printf("\nSize of array should be less than 10");
    }
}

void displayArray(int size){
    printf("\nDisplaying array:");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d",A[i]);
    }
    
}

void insertionSort(int arr[], int n) 
{ 
    int i, temp, j; 
    for (i = 1; i < n; i++) { 
        temp = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > temp) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = temp; 
    } 
}

void quickSort(int arr[], int beg, int end){
    int loc;
    if (beg<end)
    {
        loc=partition(arr,beg,end);
        quickSort(arr,beg,loc-1);
        quickSort(arr,loc+1,end);
    }
    
}
int partition(int a[], int beg, int end)
{
    int left, right, temp, loc, flag;
    loc = left = beg;
    right = end;
    flag = 0;
    while(flag != 1)
    {
        while((a[loc] <= a[right]) && (loc!=right))
            right--;
        if(loc==right)
            flag =1;
        else if(a[loc]>a[right])
        {
            temp = a[loc];
            a[loc] = a[right];
            a[right] = temp;
            loc = right;
        }
        if(flag!=1)
        {
            while((a[loc] >= a[left]) && (loc!=left))
                left++;
            if(loc==left)
                flag =1;
            else if(a[loc] <a[left])
            {
                temp = a[loc];
                a[loc] = a[left];
                a[left] = temp;
                loc = left;
            }
            }
        } 
    return loc;
}
