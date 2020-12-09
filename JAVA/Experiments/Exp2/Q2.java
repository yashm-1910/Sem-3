//Write a Java program to compare a String to a specified String Buffer.
import java.util.Scanner;
public class Q2 {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the First string: ");
        String str1 = scanner.nextLine();
        System.out.println("Enter the Second string: ");
        String str2 = scanner.nextLine();

        StringBuffer strbuf = new StringBuffer(str1);
        
        System.out.println("Comparing "+str1+" and "+strbuf+": " + str1.contentEquals(strbuf));
        
        System.out.println("Comparing "+str2+" and "+strbuf+": " + str2.contentEquals(strbuf));
              
        scanner.close();
    }
}