/*
WAP in java to create Box class with parameterized constructor with an object argument
to initialize length, breadth and height also create a function volume which returns the volume 
of the box and print it in main method.
 */


import java.util.Scanner;

//Class box
class Box{

    //Private data members of class Box
    private float length, breadth, height;

    //Parametrized constructor of class Box
    public Box(float length, float breadth, float height){
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

    //Public function to gel volume
    public float volume(){
        float volume = length*breadth*height;
        return volume;
    }
}
public class Exp3_1 {

    //Main method
    public static void main(String[] args) {

        float length, breadth, height;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the length, breadth and height of the cube:");
        length = scanner.nextFloat();
        breadth = scanner.nextFloat();
        height = scanner.nextFloat();

        //Instantiating object of class and passing parameters
        Box cube = new Box(length,breadth,height);
        System.out.println("The volume of the cube is:"+cube.volume());

        scanner.close();
    }
}