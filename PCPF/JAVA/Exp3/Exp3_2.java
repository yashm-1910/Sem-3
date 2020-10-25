//Creating package p2
package p2;

import java.util.Scanner;
//importing package p1
import p1.*;
public class Exp3_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double radius;
        System.out.println("Enter the radius:");
        radius=scanner.nextDouble();
        //Instantiating object of class circle
        circle c = new circle();
        c.setRadius(radius);
        System.out.println("Area of the circle is:"+ c.getArea());
        scanner.close();
    }
}
