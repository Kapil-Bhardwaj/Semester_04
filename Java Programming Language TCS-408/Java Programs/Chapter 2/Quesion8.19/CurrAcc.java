package Ques8;

import java.util.Scanner;

public class CurrAcc extends Account {
    
  
   void deposite(int rupee)
   {
       bal += rupee;
   }
   void Servicecharge(){
    if(bal<10000)   
    bal +=200;
   }
    
   void balcheck()
   {
       if(bal < 10000)
       {
             Servicecharge();

           System.out.println("Your balance is less that minimum balance\n Now Service chard=ge of  200 rs.\n your balance is Rs."+bal);
       }
       else
       System.out.println("Your Current account balance is Rs."+bal );
   }

   void withdrowal(int amount)
   {
    if(bal < 10000)
    {
        char ask;
        Servicecharge();
        System.out.println("your do not met minimum balance requirement (balance less that Rs. 10000): Do you want to continue Y/N ");
        Scanner sc = new Scanner(System.in);
        ask = sc.next().charAt(0);
        if((ask == 'Y' || ask == 'y')&& (bal>amount))
        {
              bal -= amount;
             System.out.println("Withdrow Sucessful \nYour amout is : Rs."+bal );
        }
        else{
            System.out.println("Transaction completed, Thankyou for Banking Service");
        }
    }
   }
}
