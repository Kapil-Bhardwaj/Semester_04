//Write a program to take String of integer through command line and display sum;
class CLA
{
public static void main(String [] args)
{
     int length = args.length;
int sum = 0;
       for(int i = 0 ; i<length  ;i++)
        {
           sum+=Integer.parseInt(args[i]); 
     }  
       System.out.println("Sum = " + sum);

}
}
