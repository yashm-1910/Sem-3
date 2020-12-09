/**
 * Write a Java program to count vowels and consonants in a given string.
 */



import java.util.Scanner;
public class Q2 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string:");
        String str = scanner.nextLine();
        count(str.toLowerCase());
        scanner.close();
    }

    public static void count(String str){
        
        int cCount =0, vCount=0;
        for (char c : str.toCharArray()) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                vCount++;
            }
            else if(c>='a' && c<='z'){
                cCount++;
            }
        }
        System.out.println("Number of vowels: " + vCount);    
        System.out.println("Number of consonants: " + cCount);    

    }
}
