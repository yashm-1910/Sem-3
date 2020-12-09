import javax.swing.JFrame;
import javax.swing.*;

public class Traffic {
    public static void main(String[] args) {
        JFrame f=new JFrame();
        JPanel p=new LightPanel();
        f.add(p);
        f.setSize(250,350);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }
}