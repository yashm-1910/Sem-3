//Declaring interface animal
interface Animal {
    //members of interface are public and abstract by default
    void Sound();
    void animalHome();
}

//class cow implements interface animal
class Cow implements Animal{

    //Defenation of function sound
    public void Sound(){
        System.out.println("The cow says moo");
    }
    //Defenation of function animalHome
    public void animalHome(){
        System.out.println("The cow lives in a barn");
    }
}

//class dog implements interface animal
class Dog implements Animal{

    //Defenation of function sound
    public void Sound(){
        System.out.println("The dog says woof");
    }
    //Defenation of function animalHome
    public void animalHome(){
        System.out.println("The dog lives in a kennel");
    }
}

public class Q4{

    public static void main(String[] args) {
        
        //object of class cow
        Cow c =  new Cow();
        c.Sound();
        c.animalHome();

        //object of class dog
        Dog d = new Dog();
        d.Sound();
        d.animalHome();
    }
}
