import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JPanel;
import javax.swing.*;

public class LightPanel extends JPanel {

    private static final long serialVersionUID = 1L;
    Light l = new Light();
    public LightPanel(){
        JButton change=new JButton("Switch");
        l.setPreferredSize(new Dimension(160,260));
        buttonlistener bl=new buttonlistener();
        change.addActionListener(bl);
        add(l);
        add(change);
        
    }
    class buttonlistener implements ActionListener{

        @Override
        public void actionPerformed(ActionEvent e) {
            l.changeColor();
            throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
        }
        
    }
}