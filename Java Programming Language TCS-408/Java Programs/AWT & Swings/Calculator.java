// java  calculating Application 

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Calculator extends Frame   implements ActionListener
{
   JTextField  l1,l2;
   JLabel l;
   JButton plus,minus,into,devide;
   
   Calculator()
   {
        l1 = new JTextField();
        l1.setBounds(20, 40, 90, 40);
        
        l2 = new JTextField();
        l2.setBounds(20, 120, 90, 40);
         
        plus = new  JButton("+");
        plus.setBounds(40,180,50,40 ); 
        plus.addActionListener(this);
         minus = new  JButton("-");
        minus.setBounds(90,180,50,40 ); 
         minus.addActionListener(this);
         into = new  JButton("*");
        into.setBounds(150,180,50,40 ); 
         into.addActionListener(this);
         devide = new  JButton("/");
        devide.setBounds(200,180,50,40 ); 
    devide.addActionListener(this);
         l = new JLabel("Result here");
         l.setBounds(30,200,100,50);
             
         add(l1);
         add(l2);
         add(plus);
         add(minus);
         add(into);
         add(devide);
         add(l);
         
         
         setSize(800,800);
         setVisible(true);
         setLayout(null);
    
       
   }
   public void actionPerformed(ActionEvent e)
   {
   int s1= Integer.parseInt(l1.getText());
   
   int s2= Integer.parseInt(l2.getText());
   
   if(e.getSource()==plus)
   {
   int c=s1+s2;
   String s3=String.valueOf(c); 
   l.setText(s3);
   }
   else if(e.getSource()==minus)
   {
   int c=s1-s2;
   String s3=String.valueOf(c); 
   l.setText(s3);
   }
 else if(e.getSource()==into)
   {
   int c=s1*s2;
   String s3=String.valueOf(c); 
   l.setText(s3);
   }
   else 
   {
    int c=s1/s2;
    String s3=String.valueOf(c); 
    l.setText(s3);
   }
   
   
   }
   public static void main(String [] args)
   {
      Calculator  c = new Calculator();
   }
   
   

}
