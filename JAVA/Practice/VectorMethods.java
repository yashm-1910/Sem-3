import java.util.Vector;

public class VectorMethods {
    public static void main(String[] args) {
        
        //Create a vector  
        Vector<String> vector = new Vector<String>();
        
        //Displays the capacity of the vector when it is empty
        System.out.println("Default capacity of vector is: " + vector.capacity());
        //Adding elements using add() method of List 
        vector.add("Dog");
        vector.add("Cat");
        vector.add("Horse");
        vector.add("Cow"); 
        vector.add("Goat");
        vector.add("Sheep");
        vector.add("Pig");
        //Adding elements using addElement() method of Vector  
        vector.addElement("Mouse");
        //displaying the size of vector using size() method
        System.out.println("The size of the vector is: " + vector.size());
        vector.add("Donkey");
        vector.add("Duck");
        vector.add("Fish");
        //Displaying the new size and capacity
        System.out.println("The new capacity of vector is: " + vector.capacity());
        System.out.println("The new size of vector is: " + vector.size());
        //Displaying the vector
        System.out.println("Our vector is: " + vector);
        //get the element at nth position using get() mwthod
        System.out.println("The element at 5th position in vector is: " + vector.get(5));
        //get the element at nth position using elementAt() method
        System.out.println("The element at 9th position is: " + vector.elementAt(9));
        //to see if the vector contains a particular element use contains() method
        System.out.println("The vector contains horse. " + vector.contains("Horse"));
        System.out.println("The vector contains tiger. " + vector.contains("Tiger"));
        //to get the first element of the vector use firstElement() method
        System.out.println("The first element in the vector is: " + vector.firstElement());
        //to get the last element of the vector use lastElement() method
        System.out.println("The last element in the vector is: " + vector.lastElement());
        //to get the index of the first occurence of an element in the vector use indexOf() method
        System.out.println("The index of mouse is: " + vector.indexOf("Mouse"));
        //remove an element from vector using remove()
        vector.remove("Goat");
        //remove element at nth index using removeElementAt()
        vector.removeElementAt(7);
        //Displaying the vector after deletion
        System.out.println("The vector after deletion is: " + vector);
    }
}
