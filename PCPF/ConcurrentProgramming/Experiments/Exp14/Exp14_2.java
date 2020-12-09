//Shared class between two threads
class Friend {

    private final String name;

    //Constructor for class friend
    public Friend(String name) {
        this.name = name;
    }
    //method to get name 
    public String getName() {
        return this.name;
    }
    // first synchronized method
    public synchronized void greet(Friend myFriend) {
        System.out.format(this.name + ": " + myFriend.getName() + " says Hello to me!\n");
        myFriend.greetBack(this);
    }
    // second synchronized method
    public synchronized void greetBack(Friend myFriend) {
        System.out.format(this.name +": " + myFriend.getName() + " says Hii to me!\n");
    }
}

class myThread extends Thread{
    
    private Friend friend1;
    private Friend friend2;

    // constructor to initialize fields
    myThread(Friend friend1, Friend friend2){
        this.friend1 = friend1;
        this.friend2 = friend2;
    }
    public void run(){
        friend1.greet(friend2);
    }
}

public class Exp14_2 {
    public static void main(String[] args) {

        //resourse 1
        final Friend vincent = new Friend("Vincent");
        //resourse 2
        final Friend charles = new Friend("Charles");
        //First thread
        myThread t1 = new myThread(vincent,charles);
        //Second thread
        myThread t2 = new myThread(charles, vincent);
        t1.start();
        t2.start();
    }
}