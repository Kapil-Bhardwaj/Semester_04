import javax.swing.*;  
class ButtonDemo extends JFrame
{
    ButtonDemo()
    {
       JFrame j;
    
      setTitle("Name");
       JLabel name = new JLabel("Start Here");
       name.setBounds(10,32,80,90);
       JButton B = new JButton("Maar K Dhika");
       B.setBounds(40,164,180,50);
       
       final JTextField tf = new JTextField();
       tf.setBounds(200,70,90,50);
       
       
        setSize(400,400); 
       add(tf);
       add(name);
       add(B);
       setLayout(null);
       setVisible(true);
   }
   
   public static void main(String [] args)
   {     for(int i =0;i<100;i++)
   {
         ButtonDemo h = new ButtonDemo();
    }  ButtonDemo o = new ButtonDemo();
   }
   

}
