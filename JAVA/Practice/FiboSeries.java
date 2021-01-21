//Fibonacci Example
import java.util.Scanner;

class Fibonacci{
    
    private int num;

    public void setNum(int num) {
        this.num = num;
    }

    public void displaySeries(){
        
        System.out.println("Displaying fibonacci series upto first " + num + " elements.");
        int f1 = 0, f2 = 1;
        for (int i = 0; i < num; i++) {
            System.out.println(f1);
            int f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    }
    
}
public class FiboSeries {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of elements of series to be displayed");
        int num = scanner.nextInt();

        Fibonacci fibo = new Fibonacci();
        System.out.println("Object fibo is instance of class Fibonacci:" + (fibo instanceof Fibonacci));
        fibo.setNum(num);
        fibo.displaySeries();
        
        scanner.close();
    }
}
