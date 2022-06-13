// Finding Ip Address of any WebSite;
// to print the ip address of any website
import javax.swing.*;
import java.awt.*;
 import java.awt.event.*;  

class IP extends Frame  implements ActionListener
{ 
     JTextField tf;
     JButton b;
     JLabel l,l2;
     
     IP()
     {
          tf = new JTextField();
          tf.setBounds(100,100,190,50);
          
          l = new JLabel("IP Will Be here");
             l.setBounds(150,150,500,100);
             
          l2 = new JLabel("IP Will Be here");
             l2.setBounds(250,300,500,100);   
             
          b = new JButton("Show IP");
          b.setBounds(250,250,150,50);
           b.addActionListener(this); 
          add(tf);
           add(l);
           add(l2);
            add(b);
             
          setSize(500,500); 
          setLayout(null) ;
          setVisible(true);
        
          
     }
      public void actionPerformed(ActionEvent e) {  
        try{  
        String host=tf.getText();  
        String ip=java.net.InetAddress.getByName(host).getHostAddress();  
        l.setText("IP of "+host+" is: "+ip);  
        String s = tf.getText();
        l2.setText(s);
        }catch(Exception ex){System.out.println(ex);}  
    } 
     
        
    public static void main(String[] args)
    {
       IP a = new IP();
    }


}
