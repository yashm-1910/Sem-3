//Arrays
import java.util.Scanner;

public class Array 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an length of array:");
        int n = sc.nextInt();
        int a[] = new int[n];
        System.out.println("Enter an array:");
        for (int i = 0; i < n; i++) {
           a[i] = sc.nextInt();
        }
        
        sort(a);
        search(a,12);
        displayCommon(a);
        System.out.println("Enter the number to delete:");
        int num = sc.nextInt();
        a=delete(a,num);
        a = insert(a,12);
        
        sc.close();
    }

    public static int[] insert(int[] arr,int num){
        
        int[] a = new int[arr.length+1];
        a[arr.length]=num;
        for (int i = 0; i < arr.length; i++) {
            a[i]=arr[i];
        }
        System.out.println("Displaying array after insertion:");
        display(a);
        return a;
    }
    public static void sort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i+1; j < arr.length; j++) {
                if (arr[i]>arr[j]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        display(arr);
    }
    public static void display(int[] arr) {
        System.out.println("Displaying array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }

    public static void search(int[] arr, int num){
        int flag=0;
        for (int i : arr) {
            if (i == num) {
                System.out.println(num + " found at " + (i+1));
                flag++;
            }
        }
        if (flag == 0) {
            System.out.println(num + " not found");
        }
    }

    public static void displayCommon(int[] arr){
        for (int i = 0; i < arr.length; i++) {
            int count = 0;
            for ( int j = i+1; j < arr.length; j++) {
               if ((arr[i] == arr[j])) {
                   count++;
               }
           }
           if (count == 1) {
               System.out.println(arr[i] +" Is the common element");
           }
       }
    }

    public static int[] delete(int[] arr, int num){
        
        int count =0;
        for (int i = 0; i < arr.length; i++) {
            if( num == arr[i]){
                count++;
            }
        }
        
        if (count==0) {
            System.out.println("The element to be deleted is not present in array.");
            return arr;
        }
        else{
            int[] newArr = new int[arr.length-count];
            for (int i = 0, k =0; i < arr.length; i++) {
                
                if (num != arr[i]) {
                    newArr[k++]=arr[i];
                }
            }
            System.out.println("The new array after deletion is:");
            display(newArr);
            return newArr;
        }
    }
}