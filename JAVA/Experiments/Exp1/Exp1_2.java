/**
 * Implement a java program to calculate gross salary & net salary taking the following data.
Input: empno, empname, basic
Process:DA=70% of basic,HRA=30% of basic,CCA=Rs240/-,PF=10% of basic, PT= Rs100/-
 */


import java.util.Scanner;
public class Exp1_2
{

     public int employeid;
     public String empname;
     public double basicsalary,HRA,DA,GS,PF,CCA=240, PT=100, incometax,netsalary;
     public void read()
     {
        Scanner scan= new Scanner(System.in);
        System.out.println("Enter the employee id");//taking all the inputs from the user
        employeid=scan.nextInt();
        System.out.println("Enter the employee name");
        empname=scan.next();
        System.out.println("Enter the basic salary of an employee");
        basicsalary=scan.nextDouble();
        scan.close();
     }
     public void calculate()  //calculating all the parameters
     {
        
        HRA=(30*basicsalary)/100;
        DA=(70*basicsalary)/100;
        PF =(10*basicsalary)/100;
        GS=basicsalary+DA+HRA+PF+PT+CCA;
        incometax=(30*GS)/100;
        netsalary=GS-incometax;
    }
     
   public void display()  //displaying the calculating parameters
     {
        System.out.println("Employeeid  :  "+employeid);
        System.out.println("Employename  :  "+empname);
        System.out.println("Employee basic salary :  "+basicsalary);
        System.out.println("HRA  :  "+HRA);
        System.out.println("DA  :  "+DA);
        System.out.println("PF  :  "+PF);
        System.out.println("CCA  :  "+CCA);
        System.out.println("PT  :  "+PT);
        System.out.println("Gross Salary  :  "+GS);
        System.out.println("Income tax  :  "+incometax);   
        System.out.println("net salary  :  "+netsalary); 
      }
 
     public static void main(String args[])
     {
         Exp1_2 employeobj=new Exp1_2();
         employeobj.read(); //calling read function
	 employeobj.calculate(); 
         employeobj.display(); //calling display function
     }
}