/*
Write a program to implement single inheritance. Declare super class
‘Employee’ with emp_no and emp_name.Declare subclass ‘Fitness’
with height and weight. Accept and display data for five employees.
*/

import java.util.Scanner;

class Employee{
    
    private int emp_no;
    private String emp_name;

    Scanner scanner = new Scanner(System.in);

    //Method to display employee name and id
    public void getData(){
        System.out.println("The name of Employee is:" + emp_name);
        System.out.println("The ID of Employee is:" + emp_no);
    }
    //Method to enter employee name and id
    public void putData(){
        System.out.println("Enter Employee name:");
        emp_name = scanner.nextLine();
        System.out.println("Enter Employee number:");
        emp_no = scanner.nextInt();
    }
}
//Class fitness extends Employee class
class Fitness extends Employee{

    private float height, weight;

    Scanner scanner = new Scanner(System.in);

    //Method to enter employee height
    public void setHeight() {
        System.out.println("Enter Employee height in centimeters:");
        height = scanner.nextFloat();
    }
    //Method to enter employee weight
    public void setWeight() {
        System.out.println("Enter Employee weight kilograms:");
        weight = scanner.nextFloat();
    }
    //Method to display employee height and weight
    public void display(){
        super.getData();
        System.out.println("The height of Employee is:" + height);
        System.out.println("The weight of Employee is:" + weight);
    }
    
}

//Driver Class
public class AT_2 {

    public static void main(String[] args) {
        
        System.out.println("Enter details");

        //Instantiating object array of fitness class
        Fitness emp[] = new Fitness[5];

        //createing employee objects using constructor
        for (int i = 0; i < 5; i++) {
            emp[i] = new Fitness();
        }

        //initializing employee details
        for (int i = 0; i < 5; i++) {
            System.out.println("Employee " + (i+1));
            emp[i].putData();
            emp[i].setHeight();
            emp[i].setWeight();
            System.out.println("\n");
        }

        System.out.println("Displaying Employee Details:");

        //Displaying employee details
        for (int i = 0; i < 5; i++) {
            System.out.println("\n");
            emp[i].display();
        }
    }
}
