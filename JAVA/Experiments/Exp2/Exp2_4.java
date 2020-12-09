/**
 * Write a java programs to add n strings in a vector array. Input new string and
 * check whether it is present in the vector. If it is present delete it otherwise add
 * it to the vector.
 */
import java.util.Vector;
import java.util.Scanner;

public class Exp2_4 {
    public static void main(String[] args) {
        int n;
        String str;
        Scanner scanner = new Scanner(System.in);
        //Initialize a string vector
        Vector<String> vect = new Vector<String>();
        
        System.out.println("Enter Number of strings ypu want to enter: ");
        n = scanner.nextInt();
        //Add n strings to the vector
        for (int i = 0; i < n; i++) {
            System.out.println("Enter a string:");
            str = scanner.next();
            vect.add(str);
        }
        System.out.println("Vector: " + vect);

        System.out.println("Enter a new string: ");
        String newStr = scanner.next();

        //If new string exists in vector, remove it, else add it
        if (vect.contains(newStr)) {
            vect.remove(newStr);
        }
        else{
            vect.add(newStr);
        }
        //Print the vector
        System.out.println("Vector: " + vect);

        scanner.close();
    }
}