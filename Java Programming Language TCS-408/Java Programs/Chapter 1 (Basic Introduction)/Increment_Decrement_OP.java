// WAP to demostrate use of INCREEMENT DECREEMENT operators
class Increment_Decrement_OP{
public static void main(String [] args){
int a = 10 ,b = 100 ;
a ++;
System.out.println("a++ :"+a);          //a = 11;
++a;
System.out.println("++a :"+a);          //a = 12;
b = a++ + ++a;

System.out.println(" b = a++ + ++a :"+b);  //  13  + 13 = 26

   

} 

}