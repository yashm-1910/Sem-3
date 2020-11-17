class Multi4 implements Runnable{  
public void run(){  
System.out.println("thread is running...");  
}  
  
public static void main(String args[]){  
Multi4 m1=new Multi4();  
Thread t1 =new Thread(m1);  
t1.start();  
 }  
}  