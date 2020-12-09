import java.util.Scanner;
 
//creating class nThreads that extends Thread
class nThreads extends Thread{
    public void run(){
        try {
            //Displaying the thread that is running
            System.out.println("Thread " + Thread.currentThread().getId() + " is running");
        } catch (Exception e) {
            //Throwing exception
            System.out.println(e);
        }
    }
}
public class Exp13_4 {
    public static void main(String[] args) {
        int n; //Number of threads
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of threads:");
        n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            //Instantiating object of class nThreads
            nThreads thread = new nThreads();
            thread.start();
        }
        scanner.close();
    }
}
