//You have been given the list of the names of the files in your directory. You
//have to select Java files from them. A file is a Java file if it’s name ends with
//".java".

import java.io.File;
import java.io.FilenameFilter;
import java.io.IOException;

public class Exp8_1 {
   public static void main(String args[]) throws IOException {
      //Creating a File object for directory
      File directoryPath = new File("D:\\College\\Java\\Experiments\\Exp1");
      FilenameFilter textFilefilter = new FilenameFilter(){
         public boolean accept(File dir, String name) {
            String lowercaseName = name.toLowerCase();
            if (lowercaseName.endsWith(".java")) {
               return true;
            } else {
               return false;
            }
         }
      };
      //List of all the text files
      String filesList[] = directoryPath.list(textFilefilter);
      System.out.println("List of the text files in the specified directory:");
      for(String fileName : filesList) {
         System.out.println(fileName);
      }
   }
}