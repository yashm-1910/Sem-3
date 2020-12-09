import java.util.Scanner;

//defining interface student
interface Student{
    void getRoll_no();
    void setRoll_no();
}
//Interface test inherits interface student
interface Test extends Student{
    void getMarks();
    void setMarks();
}
//interface sports inherits interface Student
interface Sports extends Student{
    void getScore();
    void setScore();
}

//class result inherits interfaces test and sports
class Result implements Test, Sports{

    private int roll_no, marks, score;

    Scanner scanner = new Scanner(System.in);
    
    //Implementing inherited abstract methods
    public void getRoll_no() {
        System.out.println("The roll_no of student is: " + roll_no);
    }

    public void setRoll_no() {
        System.out.println("Enter student roll no : ");
        roll_no = scanner.nextInt();
    }

    public void getMarks() {
        System.out.println("The marks of student is: " + marks);
    }

    public void setMarks() {
        System.out.println("Enter student marks : ");
        marks = scanner.nextInt();
    }

    public void getScore() {
        System.out.println("The score of student is: " + score);
    }

    public void setScore() {
        System.out.println("Enter student score : ");
        score = scanner.nextInt();
    }
    //Method to display total
    public void getTotal() {
        System.out.println("The total score of student is: " + (marks+score));
    }
}

//Driver class
public class Exp4_1{
    public static void main(String[] args) {
        
        //Object of class result
        Result res = new Result();
        res.setRoll_no();
        res.setMarks();
        res.setScore();

        //Displaying result
        res.getRoll_no();
        res.getMarks();
        res.getScore();
        res.getTotal();
    }
}