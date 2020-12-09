/**
 * Create an interface vehicle and classes like bicycle, car, bike etc, having
 *common functionalities and put all the common functionalities in the
 *interface. Classes like Bicycle, Bike, car etc implement all these
 *functionalities in their own class in their own way.
 */

import java.util.Scanner;
//Defining interface Vhicle
interface Vehicle{

    void wheelsCount();
    void bodyColor();
    void seats();
    void setData();
}

//Class bicycle inhertis interface vehicle
class Bicycle implements Vehicle{

    private String color;
    private int seats,count;

    //Implementing inherited absterct methods
    Scanner scanner = new Scanner(System.in);
    public void wheelsCount(){
        System.out.println("Bicycle has " + count + " wheels.");
    }
    public void bodyColor(){
        System.out.println("Bicycle is " + color + " in color.");
    }
    public void  seats(){
        System.out.println("Bicycle has " + seats +" seat.");
    }
    public void setData(){
        System.out.println("Enter number of wheels, body colour and number of seats:");
        count=scanner.nextInt();
        color = scanner.next();
        seats = scanner.nextInt();
    }
}

class Bike implements Vehicle{
    private String color;
    private int seats,count;

    //Implementing inherited absterct methods
    Scanner scanner = new Scanner(System.in);
    public void wheelsCount(){
        System.out.println("Bike has " + count + " wheels.");
    }
    public void bodyColor(){
        System.out.println("Bike is " + color + " in color.");
    }
    public void  seats(){
        System.out.println("Bike has " + seats +" seat.");
    }
    public void setData(){
        System.out.println("Enter number of wheels, body colour and number of seats:");
        count=scanner.nextInt();
        color = scanner.next();
        seats = scanner.nextInt();
    }
}

class Car implements Vehicle{
    private String color;
    private int seats,count;

    Scanner scanner = new Scanner(System.in);

    //Implementing inherited absterct methods
    public void wheelsCount(){
        System.out.println("Car has " + count + " wheels.");
    }
    public void bodyColor(){
        System.out.println("Car is " + color + " in color.");
    }
    public void  seats(){
        System.out.println("Car has " + seats +" seat.");
    }
    public void setData(){
        System.out.println("Enter number of wheels, body colour and number of seats:");
        count=scanner.nextInt();
        color = scanner.next();
        seats = scanner.nextInt();
    }
}

//Driver class
public class Exp4_2 {
    public static void main(String[] args) {
        //Object of class bike
        Bike bike = new Bike();
        System.out.println("Enter bike details");
        bike.setData();
        bike.wheelsCount();
        bike.seats();
        bike.bodyColor();

        //object of class bicycle
        Bicycle bicycle = new Bicycle();
        System.out.println("Enter bicycle details");
        bicycle.setData();
        bicycle.wheelsCount();
        bicycle.seats();
        bicycle.bodyColor();

        //object of class car
        Car car = new Car();
        System.out.println("Enter car details");
        car.setData();
        car.wheelsCount();
        car.seats();
        car.bodyColor();
    }
}
