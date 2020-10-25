//Abstract class Bank
abstract class Bank{
    //Abstract method get balance
    abstract float getbalance();
}
//Class BankA extending abstract class Bank
class BankA extends Bank{
    private float balance; 
    public void setBalance(float balance){
        this.balance=balance;
    }
    //Defination of function getBalance
    public float getbalance(){
        return balance;
    }
}
//Class BankB extending abstract class Bank
class BankB extends Bank{
    private float balance;        

    public void setBalance(float balance){
        this.balance=balance;
    }
    //Defination of function getBalance
    public float getbalance(){
        return balance;
    }
}
//Class BankC extending abstract class Bank
class BankC extends Bank{
    private float balance;        
    public void setBalance(float balance){
        this.balance=balance;
    }
    //Defination of function getBalance
    public float getbalance(){
        return balance;
    }
}

public class Exp3_3 {

    //main method
    public static void main(String[] args) {
        
        //Object of BankA
        BankA a = new BankA();
        a.setBalance(100);
        System.out.println("The balance in BankA is:"+a.getbalance()); 

        //Object of BankB
        BankB b = new BankB();
        b.setBalance(150);
        System.out.println("The balance in BankB is:"+b.getbalance()); 

        //Object of BankC
        BankC c = new BankC();
        c.setBalance(200);
        System.out.println("The balance in BankC is:"+c.getbalance()); 
    }
}
