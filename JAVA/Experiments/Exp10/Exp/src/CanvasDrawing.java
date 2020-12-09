//Write Java program to draw various shapes on Canvas using JavaFX.
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.control.ColorPicker;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.stage.Stage;


public class CanvasDrawing extends Application {
    
    @Override
    public void start(Stage s) {
        Canvas c=new Canvas(800,500);
        GraphicsContext gc;
        gc=c.getGraphicsContext2D();
        ColorPicker cp=new ColorPicker();
        gc.setStroke(Color.BLUE);
        gc.setLineWidth(1);
        cp.setValue(Color.BLUE);
        cp.setOnAction(e->{
            gc.setStroke(cp.getValue());
        });
        
        StackPane root = new StackPane();
        
        Scene scene = new Scene(root, 800, 500);
        scene.setOnMousePressed(e->{
            gc.beginPath();
            gc.lineTo(e.getSceneX(),e.getSceneY());
            gc.stroke();
        });
        scene.setOnMouseDragged(e->{
           gc.lineTo(e.getSceneX(),e.getSceneY());
            gc.stroke(); 
        });
        root.getChildren().addAll(c,cp);
        s.setTitle("Canvas Drawing");
        s.setScene(scene);
        s.show();
    }


    public static void main(String[] args) {
        launch(args);
    }
    
}