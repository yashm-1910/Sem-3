import java.util.Scanner;
import java.io.IOException;

class MarksOutOfBoundsException extends Exception{
    String msg;
    MarksOutOfBoundsException(String msg){
        super(msg);
    }
}
public class sample {
    public static void main(String[] args)throws MarksOutOfBoundsException{
       double seatno, centre_num, marks;
       
       Scanner sc=new Scanner(System.in);
        
              
       try{
		System.out.println("Enter your name:");
        	String name=sc.nextLine();
        	System.out.println("Enter the seatno:");
           	seatno=sc.nextDouble();
                System.out.println("Enter the date:");
           	String date=sc.next();
                System.out.println("Enter the centre_num:");
           	centre_num=sc.nextDouble();
                System.out.println("Enter the marks:");
           	marks=sc.nextDouble();
           		if(marks<=0 || marks>=100)
               			throw new MarksOutOfBoundsException("Marks cannot be less than zero or even cannot exceed 100");
           		else
           			{ 
                        System.out.println("Details of Sem2");
                        System.out.println("Name:"+name);
                        System.out.println("Seatno:"+seatno);
                        System.out.println("Date:"+date);
                        System.out.println("Centre number:"+centre_num);
                        System.out.println("Marks of sem 2:"+marks);
           			}
        }
       catch(MarksOutOfBoundsException ex){
                	System.out.println(ex.getMessage());
                    }
            
        }
    }