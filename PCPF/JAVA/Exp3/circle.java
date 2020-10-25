//Creating package p1
package p1;

//Public declaration of class circle
public class circle {

    //Private data members 
    private double radius;
    private double area, circumference;

    //Public Functions
    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    public double getArea() {
        area = 3.14*radius*radius;
        return area;
    }

    public double getCircumference() {
        circumference = 2*3.14*radius;
        return circumference;
    }

}
