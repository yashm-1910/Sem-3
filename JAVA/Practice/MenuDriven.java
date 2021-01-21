import java.util.Scanner;

public class MenuDriven {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        int choice,num;
        do {
            System.out.println("Enter 1 for Factorial()");
            System.out.println("Enter 2 for PositiveNumber()");
            System.out.println("Enter 3 for PrimeNo()");
            System.out.println("Enter 4 to exit");
            System.out.println("Enter your choice");
            choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter the number to find factorial:");
                    num = scanner.nextInt();
                    Factorial(num);
                    break;
                case 2:
                    System.out.println("Enter the number:");
                    num = scanner.nextInt();
                    PositiveNumber(num);
                    break;
                case 3:
                    System.out.println("Enter the number:");
                    num = scanner.nextInt();
                    PrimeNo(num);
                    break;
                default:
                    break;
            }
        } while (choice != 4);

        scanner.close();
    }

    public static void Factorial(int num){
        if (num == 0) {
            System.out.println("The factorial of 0 is 1.");
        }
        else{
            int factorial = 1;
            for (int i = 1; i <= num; i++) {
                factorial*=i;
            }
            System.out.println("The factorial of " + num + " is " + factorial);
        }
    }

    public static void PositiveNumber(int num){
        if (num > 0) {
            System.out.println("The number " + num + " is positive");
        }
        else if( num == 0){
            System.out.println("The number is 0");
        }
        else{
            System.out.println("The number " + num + " is negative");
        }
    }

    public static void PrimeNo(int num) {
        int flag = 0;
        for (int i = 1; i < num/2; i++) {
            if(num%i == 0){
                flag++;
            }
        }
        if (num == 1 || num == 0) {
            System.out.println("The number is not prime");
        }
        else if (flag != 0) {
            System.out.println("The number " + num + " is not prime");
        }
        else{
            System.out.println("The number " + num + " is prime");
        }
    }
}
