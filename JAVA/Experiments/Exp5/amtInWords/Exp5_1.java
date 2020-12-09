/**
 * Create a class "Amount In Words" within a user defined package to convert
 *the amount into words. (Consider amount not to be more than 100000).
 */
package amtInWords;

import java.util.Scanner;
class amountInWords{
    
    private static String one[] = { "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " }; 
    private static String ten[] = { "", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety " };

    // n is 1-digit number or 2-digit number 
    public String numToWords(int n, String s) 
    { 
        String str = ""; 
        // if n is more than 19, divide it 
        if (n > 19) { 
            str += ten[n / 10] + one[n % 10]; 
        } 
        else { 
            str += one[n]; 
        } 
  
        // if n is non-zero 
        if (n != 0) { 
            str += s; 
        } 
  
        return str; 
    } 
    // Function to return a given number in words 
    public String convertToWords(int n) 
    {   
        //For 0
        if (n == 0) {
            return "The number " + n + " in words is zero";
        }
        //if number is greater than 100000
        else if(n > 100000){
            return "Number cannot be greater than 100000";
        }
        else{
            // stores word representation of given number n 
            String out = ""; 
    
            
            // handles digits at hundred thousands and one 
            // millions places (if any) 
            out += numToWords((int)((n / 100000) % 100), "lakh "); 
    
            // handles digits at thousands and tens thousands 
            // places (if any) 
            out += numToWords((int)((n / 1000) % 100), "thousand "); 
    
            // handles digit at hundreds places (if any) 
            out += numToWords((int)((n / 100) % 10), "hundred "); 
    
            if (n > 100 && n % 100 > 0) { 
                out += "and "; 
            } 
    
            // handles digits at ones and tens places (if any) 
            out += numToWords((int)(n % 100), ""); 
    
            return "The number " + n + " in words is " +out; 
        }
    } 
}
// Driver code 
public class Exp5_1 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        //Thakin input from user
        System.out.println("Enter the number you want to convert to words:");
        int num = scanner.nextInt();

        //Object of class amountInWords
        amountInWords amt = new amountInWords();

        //Displaying the result
        System.out.printf(amt.convertToWords(num)); 
        scanner.close();
    }
}
