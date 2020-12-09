//Write java program to print Table of Five, Seven and Thirteen using
//Multithreading(Use Runnable Interface)

class table implements Runnable{
    int n;
    table(int n){
        this.n=n;
    }
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.printf("%s: %d * %d = %d\n", Thread.currentThread().getName(),n, i, i * n);        }
    }
}
public class Exp7_2 {
    public static void main(String[] args) {
        System.out.println("Printing table of 5,7,13");
       
        table mul1 = new table(5);
        Thread t1= new Thread(mul1);
        table mul2 = new table(7);
        Thread t2= new Thread(mul2);
        table mul3 = new table(13);
        Thread t3= new Thread(mul3);
        t1.start();
        t2.start();
        t3.start();
        
    }
}