import java.util.*;


class SeriesSum
{
    public static void main(String[] args) {
          float sum=0;
          System.out.print("Enter upto where you want to find sum : ");
  Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
        for (int i = 1 ; i<=n ; i++)
        {
            sum += (float)1/i;
        }
             System.out.println(sum);

    }
}
