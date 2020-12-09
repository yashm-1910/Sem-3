//Write a Java program to design a Login Form using JavaFX Controls.
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.text.Text;
import javafx.stage.Stage;
public class Login extends Application {
       Button submit;
       Button clear;
       TextField email;
       PasswordField pass;
        @Override     
   public void start(Stage s){   
       Text text1 = new Text("Email");  
       Text text2 = new Text("Password"); 
       email = new TextField(); 
       pass = new PasswordField();
       submit = new Button("Submit");
      submit.setOnAction(e -> {
          System.out.println("Form Submitted Successfully");
   
  });
      clear = new Button("Clear");
      clear.setOnAction(e -> {
        email.clear();
        pass.clear();
  });
       //Creating a Grid Pane 
      GridPane gridPane = new GridPane();    
      
      //Setting size for the pane 
      gridPane.setMinSize(400, 200); 
      
      //Setting the padding  
      gridPane.setPadding(new Insets(10, 10, 10, 10)); 
      
      //Setting the vertical and horizontal gaps between the columns 
      gridPane.setVgap(5); 
      gridPane.setHgap(5);       
      
      //Setting the Grid alignment 
      gridPane.setAlignment(Pos.CENTER); 
       
      //Arranging all the nodes in the grid 
      gridPane.add(text1, 0, 0); 
      gridPane.add(email, 1, 0); 
      gridPane.add(text2, 0, 1);       
      gridPane.add(pass, 1, 1); 
      gridPane.add(submit, 0, 2); 
      gridPane.add(clear, 1, 2); 
       
      //Styling nodes  
      submit.setStyle("-fx-background-color: darkslateblue; -fx-text-fill: white;"); 
      clear.setStyle("-fx-background-color: darkslateblue; -fx-text-fill: white;"); 
       
      text1.setStyle("-fx-font: normal bold 20px 'serif' "); 
      text2.setStyle("-fx-font: normal bold 20px 'serif' ");  
      gridPane.setStyle("-fx-background-color: YELLOW;"); 
              
      //Creating a Scene by passing the group object, height and width   
      Scene scene = new Scene(gridPane); 
               
      //Setting the title to Stage. 
      s.setTitle("Login Form"); 
   
      //Adding the scene to Stage 
      s.setScene(scene); 
       
      //Displaying the contents of the stage 
      s.show(); 
   }  

    public static void main(String[] args) {
        launch(args);
    }
    
}