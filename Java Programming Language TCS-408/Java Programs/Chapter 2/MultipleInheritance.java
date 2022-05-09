//how we can achieve multiple inheritance in java ? 

interface A{.                             //Interface 1 
    public void showa();
}
interface B{                              //Interface 2
    public void showB();
}


 class Main implements A,B              //interfaces implemented by Main class showing multiple inheritance
{
   public  void showa(){.                     // defining abstract function of interface A
        System.out.println("Inherited InterFace A in main class");  
    }
  public   void showB(){                     // defining abstract function of interface B
        System.out.println("Inherited InterFace B in main class");
    }
    
    
	public static void main(String[] args) {
		Main m = new Main();            // Object of MAin class to access show fuction
		m.showB();                       // Calling Function of interface A
		m.showa();                       // Calling Function of interface B
		
		 System.out.println("Sucessfully inherted both the interfaces and set and example of multiple inheritance");  //Sucessfull
		
		
	}
}
