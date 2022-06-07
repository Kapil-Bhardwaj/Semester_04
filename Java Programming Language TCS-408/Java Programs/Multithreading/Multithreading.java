// WAP to run Multiple thread 

class MultithreadingDemo extends Thread.  
{
    public void run()
    {
        try {
            System.out.println("Thread" + Thread.currentThread().getId()+" is Running");
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}
class Multithreading
{
    public static void main(String[] args) {
        int n= 8;
        for(;n>0;n--)
      {   MultithreadingDemo M = new MultithreadingDemo();
                M.start();  
    }
    }
}
