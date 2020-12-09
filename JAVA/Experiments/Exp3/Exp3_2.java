/*
Create a Teacher class and derive Professor and Associate_Professor class
from Teacher class. Define appropriate constructor for all the classes. Also
define a method to display information of Teacher. Make necessary
assumptions as required.
*/
import java.util.Scanner;

//Defining class Teacher
class Teacher{

    private String name, dept, code;

    Scanner scanner = new Scanner(System.in);

    public void getData(){
        System.out.println("Teacher name is:" + name);
        System.out.println("Teacher department is:" + dept);
        System.out.println("Teacher subject code is:" + code);
    }

    //Constructor of class Teacher
    Teacher(){
        
        System.out.println("Enter teacher name :");
        name = scanner.nextLine();
        System.out.println("Enter teacher department :");
        dept = scanner.nextLine();
        System.out.println("Enter teacher subject code :");
        code = scanner.nextLine();
    }

    public String getName() {
        return name;
    }

    public String getDept() {
        return dept;
    }

    public String getCode() {
        return code;
    }

}

//Class professor inherits class Teacehr
class Professor extends Teacher {
    //Constructor of class Professor
    Professor(){
        super();
        System.out.println("Professor's Information:");
        System.out.println("Name of Professor : "+getName());
        System.out.println("Professor Code : "+getCode());
        System.out.println("Department of Professor : "+getDept());
    }
}

//Class Associate_Professor inherits class Teacher
class Associate_professor extends Teacher {
    //Constructor of class associate professor
    Associate_professor(){
        super();
        System.out.println("Associate Professor's Information:");
        System.out.println("Name of Associate Professor : "+getName());
        System.out.println("Associate Professor Code : "+getCode());
        System.out.println("Department of Associate Professor : "+getDept());
    }
}

//Driver class
public class Exp3_2 {
    public static void main(String[] args) {
        
        //Instantiating object of class Teacher
        Teacher teacher = new Teacher();
        teacher.getData();

        new Professor();

        new Associate_professor();
    }
}