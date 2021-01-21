//implement 10 string methods
public class StringMethods {
    
    public static void main(String[] args) {
        
        String str1 = "Hello World";
        
        System.out.println("Str1 is:" + str1);

        //length method to find length of a given string
        System.out.println("The length of the string is:" + str1.length()); //11
        //toUpperCase method to print the given string in uppercase
        System.out.println("To uppercase:" + str1.toUpperCase()); //HELLO WORLD
        //toLowerCase method to print the given string in lowercase
        System.out.println("To lowercase:" + str1.toLowerCase()); //hello world

        //cahrAt() method to display the char at the nth position in a string
        System.out.println("Char at position 1 is:" + str1.charAt(1)); //e
        System.out.println("Char at position 3 is:" + str1.charAt(3)); //l

        //contains() method to see if the given string contains a particular string or char
        System.out.println("String contains Hello:" + str1.contains("Hello")); //true
        
        //concat() method to concatenate another string to given string
        System.out.println("The new string is: " + str1.concat(" From Java")); //Hello World From Java
        
        //replace() method to replace a given character of string 
        System.out.println("Replace Hello with Greetings: " + str1.replace("Hello", "Greetings")); //Greetings World
        
        //split() method to split a list at given character
        String[] splitStr = str1.split(" ");
        System.out.println("The list is splitted at every \" \": ");
        for (String string : splitStr) {
            System.out.println(string);
        }
        //Hello
        //World
        
        //isEmpty() method returns true if string is empty else returns false
        System.out.println("Str1 is empty:" + str1.isEmpty()); //flase
        
        //lastIndexOf() method returns the last index of the given character value or substring
        System.out.println("The last index of \"l\" in string is:" + str1.lastIndexOf("l")); //9
       
        String str2 = "    Hello    ";
        System.out.println("Str2 is:" + str2); //    Hello    
        //trim() method to remove blank spaces from the list
        System.out.println("Trimmed string is:" + str2.trim());//Hello

    }
}
