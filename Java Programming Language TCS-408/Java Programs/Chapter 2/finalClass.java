
 class A // if final class A used error wil be showed :finalMethod.java:10: error: cannot inherit from final A
                    //class B extends A
{

   void show ()   
    {
        System.out.println("I'm in parent class");
    }
}
class B extends A
{
    void show ()
    {
        System.out.println("I'm in parent class");
    }
}
public class finalClass {
    public static void main(String[] args) {
        B b = new B();
        A a = new A();

        b.show();
        a.show();
    }

}
