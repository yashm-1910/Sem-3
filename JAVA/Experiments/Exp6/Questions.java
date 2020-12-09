import java.util.Scanner;

class MarksOutOfBoundsException extends Exception{
    String msg;
    MarksOutOfBoundsException(String msg){
        super(msg);
    }
}
public class Questions {
    public static void main(String[] args)throws
        MarksOutOfBoundsException{
        double seatno, centre_num, marks;
        Scanner scanner=new Scanner(System.in);

        try{
            System.out.println("Enter your name:");
            String name=scanner.nextLine();

            System.out.println("Enter the seatno:");
            seatno=scanner.nextDouble();

            System.out.println("Enter the date:");
            String date=scanner.next();

            System.out.println("Enter the centre_num:");
            centre_num=scanner.nextDouble();

            System.out.println("Enter the marks:");
            marks=scanner.nextDouble();
            
            if(marks<0 || marks>100)
                throw new MarksOutOfBoundsException("Marks cannot be less than zero or even cannot exceed 100");
            else{
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

        scanner.close();
    }
}