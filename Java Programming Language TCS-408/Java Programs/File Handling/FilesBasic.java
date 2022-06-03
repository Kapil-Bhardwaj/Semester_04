// Create a file Hello.txt .... And retrieve all the Information.
package Files;

import java.io.File;
import java.io.IOException;

public class FilesBasic {
    

public static void main(String[] args) throws IOException {
    
    File f0 = new File("D:hello.txt") ;
      
    if(f0.createNewFile())
        {
                System.out.println("File created");    
        }



}



}
