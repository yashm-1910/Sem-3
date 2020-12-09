//Creating myThread1 class that extends Thread class
class myThreadT1 extends Thread{
    //Defining run method
    public void run(){
        System.out.println("Welcome to SFIT");
    }
}
//Creating myThread2 class that extends Thread class
class myThreadT2 extends Thread{
    //Defining run method
    public void run(){
        System.out.println("Welcome to IT");
    }
}
public class Exp13_2{
    //Driver code
    public static void main(String[] args) {
        //Instantiating object of myThread1 class
        myThreadT1 t1 = new myThreadT1();
        t1.start();
        //Instantiating object of myThread2 class
        myThreadT2 t2 = new myThreadT2();
        t2.start();
    }
}
