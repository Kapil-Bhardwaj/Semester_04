
class A
{

   void show ()    /// is final void show() :: error will be their :  overridden method is final
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
public class finalMethod {
    public static void main(String[] args) {
        B b = new B();
        A a = new A();

        b.show();
        a.show();
    }

}
