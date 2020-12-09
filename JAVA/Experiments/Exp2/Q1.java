//Write a Java program to implement 15 methods of Vector class.
import java.util.Enumeration;
import java.util.Vector;


public class Q1 {
public static void main(String[] args)
{
     Vector v = new Vector();
     System.out.println("Initial Capacity of Vector: "+v.capacity());
        v.add(1);
        v.add(2);
        v.add("mango");
        v.add("apple");
        v.add(3);
        v.add(5);
        v.add(3);
       
        System.out.println("Modified capacity of Vector: "+v.size());
        System.out.println("First element: " +v.firstElement());
        System.out.println("Last element: " +v.lastElement());
        if(v.contains(new String("mango")))
         System.out.println("Vector contains mango.");
        else
            System.out.println("Vector doesnt contain mango.");
        Enumeration e=v.elements();
        while(e.hasMoreElements())
        {
           Object o=e.nextElement();
           System.out.println(o+"");
           
        }
              
        
        v.insertElementAt("light",3);
        System.out.println("Index of mango is: "+v.indexOf("mango"));
        System.out.println("Index of first occurence of 3: "+v.indexOf(3,3));
        if(v.isEmpty())
            System.out.println("Vector doesnt contain elements");
        else
            System.out.println("Vector contains elements");
        v.removeElementAt(2);
        System.out.println("Modified vector is: "+v);
        v.setElementAt("litchi",3);
        System.out.println("Modified vector is: "+v);
        System.out.println("Returning sublist from the vector: "+v.subList(3,5));
        Vector<String> copy = (Vector<String>) v.clone();
        System.out.println("Cloned vector: "+copy);
        System.out.println("Hash Code value of Vector is: "+v.hashCode());
        
}
}
