//class myThread Implements runnable interface
class myThread implements Runnable{  
    //Defining run method
    public void run(){  
        System.out.println("Hello World");  
    } 
}
public class Exp13_3 {
    //Driver code
    public static void main(String[] args) {
        //Instantiating object of myThread class
        myThread m1 = new myThread();
        Thread t1 = new Thread(m1);
        t1.start();
    }
}
