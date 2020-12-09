/**
Write a Java Program to Create Account with 1000 Rs Minimum Balance,
Deposit Amount, Withdraw Amount and Also Throws LessBalanceException.
It has a Class Called LessBalanceException Which returns the Statement that
Says WithDraw Amount(_Rs) is Not Valid. It has a Class Which Creates 2
Accounts, Both Account Deposite Money and One Account Tries to
WithDraw more Money Which Generates a LessBalanceException. Take
Appropriate Action for the Same.
 */

import java.util.Scanner;

class LessBalanceException extends Exception{
    String msg;
    LessBalanceException(String msg){
        super(msg);
    }
}
public class Exp6_2 {
    public static void main(String[] rags)throws LessBalanceException{
       double deposit_amount,withdraw_amount;
       Scanner sc=new Scanner(System.in);
        
              
        try{
		System.out.println("Enter deposit amount");
        	deposit_amount=sc.nextDouble();
        	System.out.println("Enter Amount to be withdrawn");
           	withdraw_amount=sc.nextDouble();
           		if(deposit_amount<=1000)
               			throw new LessBalanceException("Amount cannot be withdrawn");
           		else
           			{
               				System.out.println("Amount"+withdraw_amount+"\t withdrawn successfully");      
           			}
        }
       catch(LessBalanceException ex){
                	System.out.println(ex.getMessage());
                    }
            
        }
    }
