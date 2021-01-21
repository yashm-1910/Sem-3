

class myThread extends Thread {
    public void run() {
        System.out.println("The thread " +Thread.currentThread().getName()+ " has started running!");
        System.out.println("The id of this thread is: " + Thread.currentThread().getId());
        System.out.println("The name of this thread is :" + Thread.currentThread().getName());

        try {
            System.out.println("The state of the thread " +Thread.currentThread().getName()+ " before sleeping is: " + Thread.currentThread().getState());
            System.out.println(Thread.currentThread().getName() + " is sleeping!");
            Thread.sleep(1000);
            System.out.println(Thread.currentThread().getName() + " woke up");
            System.out.println("The state of the thread " +Thread.currentThread().getName()+ " after sleeping is: " + Thread.currentThread().getState());
            System.out.println("Thread exit!");
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}

public class Threads {
    public static void main(String[] args) throws Exception {

        myThread t1 = new myThread();
        t1.setName("My Thread");
        System.out.println("The state of thread " +t1.getName()+ " before calling start() is:" + t1.getState());
        t1.start();
        System.out.println("The state of thread " +t1.getName()+ " before calling sleep() in main is:" + t1.getState());
        //Make main thread sleep
        Thread.sleep(2000);
        System.out.println("The state of thread " +t1.getName()+ " after calling sleep() in main is:" + t1.getState());
        System.out.println("Is thread " +t1.getName()+ " alive? " + t1.isAlive());
    }
}
