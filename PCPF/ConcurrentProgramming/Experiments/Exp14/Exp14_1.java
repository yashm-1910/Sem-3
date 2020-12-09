class List{

    synchronized public void display(int[] arr){ //synchronized method
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
            try {
                Thread .sleep( 100 );
            } 
            catch ( Exception e){ System .out.println(e);}
        }
    }
}
//Class myThread 2 for printing array 0,1,2,3,4,5
class myThread1 extends Thread{

    List l;
    private int[] myNum = {0,1,2,3,4,5};
    myThread1(List l){
        this.l = l;
    }
    public void  run(){
        l.display(myNum);
    }
}
//Class myThread 2 for printing array 10,11,12,13,14,15
class myThread2 extends Thread{

    List l;
    private int[] myNum = {10,11,12,13,14,15};
    myThread2(List l){
        this.l = l;
    }
    public void  run(){
        l.display(myNum);
    }
}

public class Exp14_1{

    public static void main(String[] args) {
        
        List l = new List();//only one object
        
        myThread1 t1 = new myThread1(l);
        myThread2 t2 = new myThread2(l);
        
        t1.start();
        t2.start();
    }
}