package Hierarical;

class main
 {
     public static void main(String[] args) 
     {
         current current = new current();
         current.Get_Account_info( 1200009523, "Piyush", 10000); 
        
         saving    saving = new saving();
         saving.Get_Account_info(1300009876, "Pta ni kon", 700000); 
         
         current.show_Acc_Data();
         saving.show_Acc_Data();
     }
    
}
