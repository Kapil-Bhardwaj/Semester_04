Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 04/05/2021
  
  Objective : Implementation of Binary Search
  
 Agorithm: 
BinarySearch(arr[], n ,  target) 
{  
     start <- 0 
        end <- n-1;
     
     
    while(start<=end)
    {    // update the mid every time 
        mid = start + ( end-start )/2 ;


       // retrun location exact location if found
        if(arr[mid] == target)  
          return mid + 1;
        
        // go to  right part
        else if (target > arr[mid])  
           start = mid + 1 ;
           
        // got to  left part
        else 
           end = mid - 1 ; 
    }
    return -1;
}

Program: 
#include<stdio.h>



// function to perform linear search
int BinarySearch(int arr[],int n , int target) 
{  
    int start = 0 , end = n-1;
     
     
    while(start<=end)
    {
        int mid = start + ( end-start )/2 ;


       // retrun exact location if found
        if(arr[mid] == target)  
          return mid + 1;
        
        // go to  right part
        else if (target > arr[mid])  
           start = mid + 1 ;
           
        // got to  left part
        else 
           end = mid - 1 ; 
    }
    return -1;
}

int main()
{   
    
    int n , target;
      
    // Takeing Size of array from user      
        printf("Binary Search \nEnter the size of Array : "); 
         scanf("%d", &n);
         
    // Declaration of array
     int arr[n];
    // Initialization of array
    for(int i =0 ; i< n ; i++)     
    {
        scanf("%d", &arr[i]);
    }
  
    // Imput target value
    printf("Enter the elemnt you want to search : "); 
         scanf("%d", &target); 
    
    //If target found return the exact location else return -1; 
    printf("Locatin : %d",BinarySearch(arr, n , target)); 

    return 0;
}
Output: 

Binary Search 
Enter the size of Array : 10
13 45 56 67 78 89 90 100 123 234 
Enter the elemnt you want to search : 123
Locatin : 9

...Program finished with exit code 0
Press ENTER to exit console.
