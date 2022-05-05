package Ques8;

import java.util.Scanner;

public class Main {

    void callfun(SavAcct sv)
    {
        
    }
    public static void main(String[] args) {
        
             Scanner sc = new Scanner(System.in);
           Main m = new Main();  
       System.out.println("Welcome to Go-Cart BAnk\nEnter your Acctype \nType s for Saving  and c for current account");
       CurrAcc cr = new CurrAcc();
       SavAcct sv = new SavAcct();
       String accType = sc.next();
       
       if(accType == "S"  ||accType=="S" )
       {
            m.callfun(sv); 
       }
       
         
    }
}
