import java.util.Scanner;
class StudentDetails{
    private int enrollNumber;
    private String student_name;
    private String subject_name[], subject_code[];
    private Double credits[], grades[], SPI[];

    Scanner scanner =new Scanner(System.in);

    public void getData(){

        System.out.println("The student enrollment number is: " + enrollNumber);
        System.out.println("The student name is: " + student_name);
        //System.out.println("The subject code is: " + subject_code);
        //System.out.println("The subject name is: " + subject_name);
    }

    public void setData(){
        System.out.println("Enter student enrollment number:");
        enrollNumber = scanner.nextInt();
        System.out.println("Enter student name:");
        student_name = scanner.nextLine();
    }

    public void getMarks(){
        for (int i = 0; i < 6; i++) {
            System.out.println("The subject code is: " + subject_code[i]);
            System.out.println("The subject name is: " + subject_name[i]);
            System.out.println("The credits earned in subject are: " + credits[i]);
            System.out.println("The grades earned in subject are: " + grades[i]);
            System.out.println("The SPI in subject is: " + SPI[i]);
        }
    }

    public void setMarks(){

        for (int i = 0; i < 6; i++) {
            System.out.println("Enter the subject code:");
            subject_code[i] = scanner.nextLine();
            System.out.println("Enter the subject name:");
            subject_name[i] = scanner.nextLine();
            System.out.println("Enter the credits earned in subject:");
            credits[i] = scanner.nextDouble();
            System.out.println("Enter the grade earned in subject:");
            grades[i] = scanner.nextDouble();
            System.out.println("Enter the SPI in subject:");
            SPI[i] = scanner.nextDouble();
        }
        
    }
}

public class Student {
   public static void main(String[] args) {

       StudentDetails student[] = new StudentDetails[5];
       for (int i = 0; i < 5; i++) {
           student[i] = new StudentDetails();
       }
       for (int i = 0; i < 5; i++) {
        System.out.println("Student " + (i+1));
        student[i].setData();
        student[i].setMarks();
        System.out.println("\n");
       }
       for (int i = 0; i < student.length; i++) {
        System.out.println("Student " + (i+1));
        student[i].getData();
        student[i].getMarks();
        System.out.println("\n");
       }
   } 
}
