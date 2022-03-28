//WAJP to count number of object created 
class ObjCount {
    static int count=0;
    int a,b;
    ObjCount(){
        count++;
    }
   int add(int a , int b){
       this.a=a;
       this.b = b;
       return a+b; 
   }
   int multiply(int a ,int b){
       return a*b;
   } 
   
   public static void main(String[] args) {
          ObjCount ob1 = new ObjCount();  //Obect no. 1
          ObjCount ob2 = new ObjCount();  //Obect no. 2
          ObjCount ob3 = new ObjCount();  //Obect no. 3
          ObjCount ob4 = new ObjCount();  //Obect no. 4
          ObjCount ob5 = new ObjCount();  //Obect no. 5
         System.out.println( ob1.add(2, 3));
         System.out.println( ob2.multiply(2, 2));
          System.out.println(ob3.add(99, 645));
         System.out.println( ob4.multiply(45, 2));
         System.out.println( ob5.add(21534, 738456));
         System.out.println("number of objects are = " + ObjCount.count);
    }
}
