/**
 * Buffered Reader class Example
 */
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;

public class Buffered {
    public static void main(String[] args) throws IOException {

        //Declare InputStreamReader object
        InputStreamReader ir=new InputStreamReader(System.in);
        //Declare BufferedReader object using InputStreamReader object
        BufferedReader br=new BufferedReader(ir);

        System.out.println("Enter Name");
        String name=br.readLine();

        System.out.println("Enter age");
        int age=Integer.parseInt(br.readLine());

        System.out.println("Enter height");
        Double height=Double.parseDouble(br.readLine());

        //Dislaying Result
        System.out.println("Name="+name+"\nAge="+age+"\nHeight="+height);
    }
}
