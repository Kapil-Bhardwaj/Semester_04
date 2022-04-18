class A{
    int a = 0; 
}
// class [A] is inherited by [B] 
class SuperKeywordUse extends A{

    int a = 50;

    void show(int a)   //Show method to shoe use of divvernet properties of different/paerent or base class; 
    {
        System.out.println(this.a);// value of a  is being displayed of child class  [B] i.e. 50

        System.out.println(super.a);// value of a  is being displayed of parent class  [A] i.e 0
        System.out.println(a);      // value of a in main mathod is being displayed

    }


    public static void main(String[] args) {
        int a = 100;
        SuperKeywordUse obj = new SuperKeywordUse();
        
        obj.show(a); // value of a in main mathod is being displayed

       
    }
    
}
