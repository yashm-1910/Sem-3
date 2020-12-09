class HelloThread extends Thread{  
    //Defining run method
    public void run(){
        System.out.println("Hello World");
    }
}
public class Exp13_1 {
    //Driver code
    public static void main(String[] args) {
        //Instantiating object of HelloThread class
        HelloThread t1 = new HelloThread();
        t1.start();
    }
}
