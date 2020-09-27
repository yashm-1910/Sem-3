/* 
Abstraction using interface
Like abstract classes interfaces cannot be instantiated
to  access the methods of an interface a class should 'implement' the interface
by default all methods of an interface are public and abstract
by default all the attributes of the interface are public, static and final
*/

//Interface
interface Pet {
    public void animalSound();
    public void sleep();
}

//Cat 'implements' the interface Pet
class Cat implements Pet {

    public void animalSound() {
        System.out.println("The cat says meow");

    }
    public void sleep() {
       System.out.println("The cat is sleeping");

    }    
}

//Pig 'implements' the interface Pet
class Pig implements Pet{

    public void animalSound() {
        System.out.println("The pig says oink");

    }
    public void sleep() {
        System.out.println("The pig is sleeping");

    }
}
public class Abstraction2 {
    public static void main(String[] args) {
        
        Pet cat = new Cat();//Initializing the ocject of the class cat
        cat.animalSound();
        cat.sleep();

        Pig pig = new Pig();
        pig.animalSound();
        pig.sleep();
    }
}
