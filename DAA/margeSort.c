Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 08/04/2022
  
  Objective : Implementation of Marge Sort
  
 -------------------- Agorithm: ----------------------
 MargeSort(arr[] low, high) 
{  

     if(low<high)
     {
         int mid=(low + high)/2;
         //printf("%d",high);
         
         MargeSort(arr,0,mid); // left part
         MargeSort(arr,mid+1,high);  // right part
         margeArray(arr,low,mid,high);   // marge the parts
     }
 
        
    }

   

 -----------------Program: --------------------------------

// function to perform Selection Sort
void MargeSort(int arr[],int low,int high) 
{  

     if(low<high)
     {
         int mid=(low + high)/2;
         //printf("%d",high);
         
         MargeSort(arr,0,mid);
         MargeSort(arr,mid+1,high);
         margeArray(arr,low,mid,high);
     }
 
        
    }

int main()
{   
    
    int n,i,target;
      
    // Takeing Size of array from user      
        printf("Merge sort\nEnter the size of Array : "); 
         scanf("%d",&n);
     // Declaration of array
     int arr[n-1];
    // Initialization of array
    for(i=0;i<n;i++)     
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    	printf("%d\t",arr[i]);
    //Calling our sort function; 
         MargeSort(arr,0,n-1);
     // Printing  array after sorting
    for(i=0;i<n;i++)     
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

-----------------Output: --------------------------------
Marge sort
Enter the size of Array : 8 
123 543 432 765 342 76 32 65   
32 65 76 123 342 432 543 765 
  
...Program finished with exit code 0
Press ENTER to exit console.
 
 ----------------Conplexity: -----------------
  T(n) = O(nlogn);
 
  



