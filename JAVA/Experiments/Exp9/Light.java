import java.awt.Color;
import java.awt.Graphics;
import javax.swing.JComponent;

public class Light extends JComponent{

    private static final long serialVersionUID = 1L;
    
    Color red = Color.red;
    Color yellow=Color.gray;
    Color green=Color.gray;
    String activelight="red";
    public void paintComponent(Graphics g){
        g.setColor(Color.yellow);
        g.fillRect(0, 0, 150, 250);
        g.setColor(Color.black);
        g.drawRect(0, 0, 150, 250);
        g.setColor(red);
        g.fillOval(50, 30, 50, 50);
        g.setColor(yellow);
        g.fillOval(50, 100, 50, 50);
        g.setColor(green);
        g.fillOval(50, 170, 50, 50);
    }
    public void changeColor(){
       red=Color.gray;
    yellow=Color.gray;
    green=Color.gray;
        if(activelight.equals("red"))
        {
            activelight="green";
            green=Color.green;
        }
        else if(activelight.equals("green"))
        {
            activelight="yellow";
            yellow=Color.orange;
        }
        else
        {
            activelight="red";
            red=Color.red;
        }
        repaint();
    }
}