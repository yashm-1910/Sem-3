//Write a Java program to write a File using FileWriter.

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.FileWriter;

 class Write {
   public static void main(String args[]) throws IOException {

     String data;
     InputStreamReader ir=new InputStreamReader(System.in);
     BufferedReader br=new BufferedReader(ir);
     data=br.readLine();
     try {
       // Creates a Writer using FileWriter
       FileWriter output = new FileWriter("filewrite.txt");

       // Writes string to the file
       output.write(data);
       System.out.println("Data is written to the file.");

       // Closes the writer
       output.close();
     }
     catch (Exception e) {
       e.printStackTrace();
     }
  }
}