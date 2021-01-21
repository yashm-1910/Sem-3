//Write a Java program to implement 10 methods of Vector class.
import java.util.Vector;

public class VectorMethodsImpl {
    @SuppressWarnings("unchecked")
    public static void main(String[] args) {
        
        //Create a vector  
        Vector<String> vectorObj = new Vector<>();
        
        //Displays the capacity of the vector when it is empty
        System.out.println("Default capacity of vector is: " + vectorObj.capacity());
        
        //Adding elements using add() method of List 
        vectorObj.add("Dog");
        vectorObj.add("Cat");
        vectorObj.add("Horse");
        vectorObj.add("Cow"); 
        vectorObj.add("Goat");
        vectorObj.add("Sheep");
        vectorObj.add("Pig");
        
        //Adding elements using addElement() method of Vector  
        vectorObj.addElement("Mouse");
        
        //displaying the size of vector using size() method
        System.out.println("The size of the vector is: " + vectorObj.size());
        vectorObj.add("Donkey");
        vectorObj.add("Duck");
        vectorObj.add("Fish");
        vectorObj.insertElementAt("Lion", 3);
        
        //Displaying the new size and capacity
        System.out.println("The new capacity of vector is: " + vectorObj.capacity());
        System.out.println("The new size of vector is: " + vectorObj.size());
        
        //Displaying the vector
        System.out.println("Our vector is: " + vectorObj);
        
        //get the element at nth position using get() mwthod
        System.out.println("The element at 6th position in vector is: " + vectorObj.get(5));
        
        //get the element at nth position using elementAt() method
        System.out.println("The element at 10th position is: " + vectorObj.elementAt(9));
        
        //to see if the vector contains a particular element use contains() method
        System.out.println("The vector contains horse. " + vectorObj.contains("Horse"));
        System.out.println("The vector contains tiger. " + vectorObj.contains("Tiger"));
        
        //to get the first element of the vector use firstElement() method
        System.out.println("The first element in the vector is: " + vectorObj.firstElement());
        
        //to get the last element of the vector use lastElement() method
        System.out.println("The last element in the vector is: " + vectorObj.lastElement());
        
        //to get the index of the first occurence of an element in the vector use indexOf() method
        System.out.println("The index of mouse is: " + vectorObj.indexOf("Mouse"));
        
        //remove an element from vector using remove()
        System.out.println("Removing Goat from vector");
        vectorObj.remove("Goat");
        //remove element at nth index using removeElementAt()
        System.out.println("Removing element at 8th position from vector");
        vectorObj.removeElementAt(7);
        //Displaying the vector after deletion
        System.out.println("The vector after deletion is: " + vectorObj);
        
        //clone() method to copy the vector
        Vector<String> vectorObjClone = new Vector<>();
        vectorObjClone=(Vector<String>) vectorObj.clone();
        System.out.println("The cloned vector is: " + vectorObjClone);
        
        //to clear all the elements in a vector use clear() method
        vectorObj.clear();
        System.out.println("The vector after clearing is: " + vectorObj);
        
        
    }
}

