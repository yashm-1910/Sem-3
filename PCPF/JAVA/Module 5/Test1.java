import java.util.Scanner;

class MyMethod{
	Scanner scanner = new Scanner(System.in);
	synchronized void printHello(){
		System.out.println("Hello World");
	}
	synchronized void printSum(){
		int m,n;
		System.out.println("Enter values of 2 numbers:");
		n = scanner.nextInt();
		m = scanner.nextInt();
		System.out.println("Sum of "+n+" and " +m+ " is "+ (m+n));
	}
}


class Thread1 extends Thread{
	MyMethod t;
	Thread1(MyMethod t){
		this.t=t;
	}
	public void run(){
		t.printHello();
	}
}
class Thread2 extends Thread{
	MyMethod t;
	Thread2(MyMethod t){
		this.t=t;
	}
	public void run(){
		t.printSum();
	}
}

public class Test1{

	public static void main(String[] args) {
		
		MyMethod obj = new MyMethod();
		Thread1 t1 =new Thread1(obj);
		Thread2 t2=new Thread2(obj);
		t1.start();  
		t2.start();
	}
}