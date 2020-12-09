/**
 * Scanner class Example
 */
import java.util.Scanner;
public class Exp2_2_1 {
    public static void main(String args[]) {
        
        //Declare Scanner class object
        Scanner scanner=new Scanner(System.in);

        System.out.println("Enter Name");
        String name=scanner.nextLine();

        System.out.println("Enter Age");
        int age=scanner.nextInt();

        System.out.println("Enter Height");
        Double height=scanner.nextDouble();

        //Display result
        System.out.println("Name="+name+"\nAge="+age+"\nHeight="+height);
        scanner.close();
        }
}
