// Program to implement diff. functions through switch case 
/**
 * i. Factorial()
ii. Reverse of a Number()
iii. Test Armstrong()
iv. Test Palindrome()
v. Test Prime()
vi. Fibonacci Series()
 */

import java.util.Scanner;
public class Exp1_1 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int ch,n;
        do {

            System.out.println("\nMENU ");
            System.out.println("1. Factorial of number ");
            System.out.println("2. Find Reverse ");
            System.out.println("3. Check whether number is Angstrom ");
            System.out.println("4. Check whether number is Palindrome ");
            System.out.println("5. Check whether number is Prime or not");
            System.out.println("6. Fibonacci Series ");
            System.out.println("7. EXIT ");
            System.out.println("Enter your choice: ");
            ch=sc.nextInt();
        
            switch(ch)
            {
                case 1: 
                {
                    System.out.println(" Enter the no whose factorial is to be calculated: ");
                    n=sc.nextInt();
                    int fact=1; 
                    while(n>0)
                    {
                        fact=n*fact;
                        n--;
                    }
                    System.out.println("Factorial is "+fact);
                    break;
                }
                case 2:
                { 
                    System.out.println(" Enter the number: ");
                    n=sc.nextInt();
                    int reversed = 0;
                    while(n != 0) {
                        int digit = n % 10;
                        reversed = reversed * 10 + digit;
                        n /= 10;
                    }
                    System.out.println("Reversed Number: " + reversed);
                    break;
                } 
                case 3:
                { 
                    System.out.println(" Enter number to check whether Angstrom: ");
                    n=sc.nextInt();
                    int num=n,r,sum=0;
                    while(num!=0) 
                    {
                        r=num%10;
                        sum=sum+(r*r*r);
                        num/=10;
                    }
                    if(n==sum)
                    System.out.println("Number is Angstrom. ");
                    else
                    System.out.println("Number is not Angstrom. ");
                    break;
                }
                case 4: 
                { 
                    System.out.println(" Enter number to check whether palindrome: ");
                    n=sc.nextInt();
                    int num=n,r,sum=0;
                    while(num!=0)
                    {
                        r=num%10;
                        sum=(sum*10)+r;
                        num/=10;
                    }
                    if(n==sum)
                    System.out.println("Number is Palindrome. ");
                    else
                    System.out.println("Number is not Palindrome. ");
                    break;
                } 
                case 5:
                { 
                    System.out.println(" Enter the number as prime or not ");
                    n=sc.nextInt();
                    int flag=0;
                    for(int i=2;i<n;i++)
                    {
                        if(n%i==0)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        System.out.println("Number is not prime ");
                    else
                        System.out.println("Number is prime ");
                    break;
                }
                case 6:
                {
                    System.out.println(" Enter the no of elements of fibonacci series to show: ");
                    n=sc.nextInt();
                    int a=0,b=1,c;
                    System.out.println("0\t1\t");
                    for(int i=1; i<=n; i++)
                    {
                        c=a+b;
                        System.out.println(c+"\t");
                        b=c;
                        a=b;
                    }
                    break;
                }
                case 7:{
                    System.out.println("Exitting.");
                    break;
                }
                default: 
                    System.out.println("INVALID CHOICE");
            }
        } while (ch!=7);
        sc.close();
    }
}