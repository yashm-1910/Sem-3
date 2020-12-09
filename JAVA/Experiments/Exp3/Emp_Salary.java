import java.util.Scanner;

//Class Emp is base class
class Emp{
    private String emp_name, emp_id;

    //Method to get employee name and id
    public void getData(){
        System.out.println("The Employee Name is: " + emp_name);
        System.out.println("The Employee ID is: " + emp_id);
    }

    //Method to set employee name and id
    public void putData(String emp_name, String emp_id){

        this.emp_name = emp_name;
        this.emp_id = emp_id;
    }

}

//Class salary inerits Emp class
class Salary extends Emp{

    private Double basic;

    //Method to get basic salary
    public Double getBasic() {
        return basic;
    }
    //Method to set basic salary
    public void setBasic(Double basic) {
        this.basic = basic;
    }
    //Method to calculate salary
    public void calculateSalary(){

        Double HRA = basic*0.3, DA = basic*0.7, CLA = 0.5*basic;
        Double salary = basic + HRA + DA + CLA;

        System.out.println("The salary of Employee is: " + salary);
    }
    
}
//Driver class
public class Emp_Salary{

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        String name, id;
        Double base_salary;

        System.out.println("Enter Employee name:");
        name = scanner.nextLine();
        System.out.println("Enter Employee ID:");
        id = scanner.next();

        System.out.println("Enter base Salary of Employee:");
        base_salary = scanner.nextDouble();

        //Object of employee class
        Emp emp = new Emp();
        emp.putData(name, id);
        emp.getData();

        //Object of salary class
        Salary salary = new Salary();
        salary.setBasic(base_salary);
        salary.calculateSalary();

        scanner.close();

    }
}