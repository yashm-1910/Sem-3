/**
 * Write a Java program that counts number of alphabets, words, digits, special
symbols and blank spaces in a given string.
 */



import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");

        String s = scanner.nextLine();
        count(s);

        scanner.close();
    }

    public static void count(String str){
        
        char [] ch = str.toCharArray();
        int letter=0, space = 0, digit = 0, other = 0, word=0;

        //To count number of words in a string by splitting the string at " "
        String[] words = str.split(" ");
        word = words.length;

        //To count the other parameters
        for (char c : ch) {
            if (Character.isLetter(c)) {
                letter ++;
            }
            else if(Character.isDigit(c)){
                digit ++;
            }
            else if(Character.isSpaceChar(c)){
                space ++;
            }
            else{
                other ++;
            }
        } 
        //Displaying all the parameters
        System.out.println("String analysis: ");
        System.out.println("WORDS: " + word);
        System.out.println("LETTER: " + letter);
        System.out.println("DIGIT: " + digit);
        System.out.println("SPACE: " + space);
        System.out.println("OTHER CHARACTERS: " + other);
    }
}
