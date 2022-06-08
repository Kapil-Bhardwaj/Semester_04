// spot the difference between start() method and run() method;
class A extends Thread
{
public void run()
{  int i;
    for(i=0; i<5;i++)
    System.out.println("Thread A : "+i);
}

}

class B extends Thread{
    public void run()
    {  int i;
        for(i=0; i<5;i++)
        System.out.println("Thread B : "+i);
    }
}
public class TestSR {
    public static void main(String[] args) {
        
        A a = new A();
        B b = new  B();
        // run
       a.run();
       b.run();  
        System.out.println("Start --------------------------");
        // start
        // a.start();
        // b.start();
    }
}
