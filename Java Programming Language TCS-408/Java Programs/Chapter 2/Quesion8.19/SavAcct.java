package Ques8;

import java.util.Scanner;

public class SavAcct extends Account {

   
   void deposite(int amount)
   {
       bal +=amount;
   }
   void balcheck()
   {
         intrestCal();
         System.out.println("Your amount is : "+bal);
   } 
   void intrestCal()
   {
       bal = bal + (bal* (7/100));
   }
   void withdrowal(int amount)
   {
    intrestCal();
      if(bal > amount){
          bal -= amount;
          System.out.println("Withdrawal of Rs."+amount+" is sucessful \nYor are left with Rs."+bal);
      }
   }


}
