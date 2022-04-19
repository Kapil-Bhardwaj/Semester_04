//abstract class java
abstract class bank
{
    abstract int get_ROI();
}


class SBI  extends bank // extents abstract 
{
    int get_ROI(){return 7;} // defination of abstract method
}

class PNB extends bank
{

    int get_ROI(){return 6;} // defination of abstract method
}

class AbstractUse
{
    public static void main (String args[])
    {
        bank b ;     // object declaration
      
        b = new SBI(); // object initialization
      
        System.out.println(b.get_ROI());
      
        bank c ;   // object initialization
      
        c= new PNB();   // object declaration
    }
         System.out.println(c.get_ROI()); // object declaration
    }
}
