//Create two threads such that one thread will print even number and another
//will print odd number in an ordered fashion.(Use Thread Class)

class even extends Thread
{
    public void run(){
      for(int i=0;i<=10;i=i+2)
	{
	System.out.println("Thread 1:"+i);
	}
    }
   
}
class odd extends Thread
{
    public void run()
    {
      for(int i=1;i<10;i=i+2)
	{
	System.out.println("Thread 2:"+i);
	}  
   
    }
}
public class Exp7_1 {
    public static void main(String[] args){
   	even e=new even();
	odd o=new odd();
	e.start();
	o.start();       
        
    }
    
}