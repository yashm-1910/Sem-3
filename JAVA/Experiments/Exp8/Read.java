//Write a Java program to read a File using FileReader.

import java.io.FileReader;

class Read {
  public static void main(String[] args) {

    char[] array = new char[150];
    try {
      // Creates a reader using the FileReader
      FileReader input = new FileReader("Hello.txt");

      // Reads characters
      input.read(array);
      System.out.println("Data in the file:");
      System.out.println(array);

      // Closes the reader
      input.close();
    }
    catch(Exception e) {
      e.printStackTrace();
    }
  }
}