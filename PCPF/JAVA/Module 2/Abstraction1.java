/* 

 Abstraction using abstract classes 
 abstract class cannot be instantiated 
 it can have abstract as well as non abstract methods
 can have constructors and static methods
 is declared using the abstract keyword

 */



//Abstract class
abstract class animal{

    //Abstract method does not have a body
    public abstract void animalSound();
    
    //Regular class
    public void sleep() {
        System.out.println("I'm sleeping");
    }
}

//this subclass inherits from the animal class

class Dog extends animal{
    public void animalSound() {
        //the body of animal sound is provided here
        System.out.println("The dog says woof");
    }
}

public class Abstraction1{
    
    public static void main(String[] args) {
        
        Dog dog = new Dog();
        dog.animalSound();
        dog.sleep();
    }
}
