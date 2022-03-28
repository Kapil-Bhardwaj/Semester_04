import java.util.*;


class TempConversion{
  double Convert_to_Celcious(int f){
      return ((f-32)/1.8);
  }
   public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    TempConversion ob = new TempConversion();
    System.out.print("Enter no. of repetation : ");
    int n = scanner.nextInt();  
     double  ans[]=new double[100];
     int InputTemp[] = new int[100];
     for(int i = 0 ; i<n ; i++){
         int temp = scanner.nextInt();
         InputTemp[i]=temp;
         ans[i] = ob.Convert_to_Celcious(temp);
     }
    for(int i = 0 ; i< n ; i++){
        System.out.println("celcious = "+InputTemp[i]+ " ---->> Ferenhit = "+ans[i]);
    }
   }
}
