import java.util.Scanner;
class cgpaException extends Exception{
     cgpaException(String str)
     {
         super(str);
     }

}

class q12
{
        
       public static void checkPromote(int cgpa) throws cgpaException
       {
                if(cgpa>9)
                {
                    throw new cgpaException("Your CGPA is Greater than 9.5 : You ar debarde   ---- Itni kiski aati h yrr");

                }
                else{
                    System.out.println("Prometted Very good");
                }
       }

     
  


    public static void main(String[] args) throws cgpaException {
        
       Scanner sc = new Scanner(System.in);
         System.out.println("Enter your cgpa in last Semester: ");
         int cgpa = sc.nextInt();
         checkPromote(cgpa);
          System.out.println("Runned Succefull++");


    }


}

