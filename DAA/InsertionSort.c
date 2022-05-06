Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 07/04/2022
  
  Objective : Implementation of Insertion  Sort
  
 Agorithm: 
 InsertionSort(  arr , n) 
{  

    for i<- 1 to n
       {
             int pivot = arr[i];
        int j = i-1;
        while(j>=0 and pivot<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;   
    }
}

    Program: 
 #include<stdio.h>



// function to perform Selection Sort
void InsertionSort(int arr[],int n) 
{  

    for(int i = 1 ; i < n ; i++ )
       {
             int pivot = arr[i];
        int j = i-1;
        while(j>=0 && pivot<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
        
        
    }
 
  
}

int main()
{   
    
    int n , target;
      
    // Takeing Size of array from user      
        printf("Selection sort\nEnter the size of Array : "); 
         scanf("%d", &n);
         
    // Declaration of array
     int arr[n-1];
    // Initialization of array
    for(int i =0 ; i< n; i++)     
    {
        scanf("%d", &arr[i]);
    }
  
    

    
    //Calling our sort function; 
         InsertionSort( arr, n );
         
    // Printing  array after sorting
    for(int i =0 ; i< n ; i++)     
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


Selection sort
Enter the size of Array : 5
12 435 21 65 21
12 21 21 65 435 

...Program finished with exit code 0
Press ENTER to exit console.

  
 TimeComplexity : 
     T(n) = n * [1 to n] i.e
    **T(n) £ O(n^2)**
