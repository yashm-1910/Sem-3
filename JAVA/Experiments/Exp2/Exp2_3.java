/**
 * Write a program that would print the information (name, year of joining,
 * salary, address) of three employees by creating a class named 'Employee'.
 * The output should be as follows:
 */


class Employee{
  private String name, address;
  private int year, salary;
  //Parameterized constructor definition
  public Employee(String name, int year, int salary, String address){
    this.name = name;
    this.year = year;
    this.salary = salary;
    this.address = address;
  }
  //method to return name
  public String getName(){
    return name;
  }
  //method to return year
  public int getYear(){
    return year;
  }
  //method to return salary
  public int getSalary(){
    return salary;
  }
  //method to retuen address
  public String getAddress(){
    return address;
  }
}

public class Exp2_3 {
  public static void main(String[] args){
    
    //Creating objects of Employee class
    Employee e1 = new Employee("Robert", 1994, 500000, "64C- WallsStreet");
    Employee e2 = new Employee("Sam", 2000, 740000, "68d- WallsStreet");
    Employee e3 = new Employee("John", 1999, 600000, "26B- WallsStreet");
    System.out.println("Name\tYear of joining\tSalary\tAddress");
    System.out.println(e1.getName()+"\t\t"+e1.getYear()+"\t"+e1.getSalary()+"\t"+e1.getAddress());  // printing details of employee 1
    System.out.println(e2.getName()+"\t\t"+e2.getYear()+"\t"+e2.getSalary()+"\t"+e2.getAddress());  // printing details of employee 2
    System.out.println(e3.getName()+"\t\t"+e3.getYear()+"\t"+e3.getSalary()+"\t"+e3.getAddress());  // printing details of employee 3
    
  }
}
