//Declaration of abstract class shape
abstract class Shape{
    //Abstract methods
    abstract float RectangleArea(float length, float breadth);
    abstract float SquareArea(float side);
    abstract double CircleArea(double radius);
}

//Class area extends abstract class Shape
 class Area extends Shape{

    //Function defination of abstrac method RectangleArea
    float RectangleArea(float length, float breadth){
        
        return length*breadth;
    }
    //Function defination of abstrac method SquareArea
    float SquareArea(float side){

        return side*side;
    }
    //Function defination of abstrac method CircleArea
    double CircleArea(double radius){

        return 3.14*radius*radius;
    }

 }
public class Q3 {
    
    public static void main(String[] args) {
        
        //Object of class Area
        Area a = new Area();
        System.out.println("The rectangle area is:" + a.RectangleArea(12, 13));
        System.out.println("The square area is:" +a.SquareArea(12));
        System.out.println("The circle area is:" +a.CircleArea(12.5));
    }
}
