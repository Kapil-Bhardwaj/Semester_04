Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 04/05/2021
  
  Objective : Implementation of Linear Search
  
 Agorithm: 
 LinearSearch( arr[],n ,  target) 
{
    for i <- 0  to n
    {
        if( arr[i] == target)
            return i+1;
    }
    return -1;
}

Program: 
  
#include<stdio.h>



// function to perform linear search
int LinearSearch(int arr[],int n , int target) 
{
    for(int i=0 ; i < n ; i++ )
    {
        if( arr[i] == target)
            return i+1;
    }
    return -1;
}

int main()
{   
    
    int n , target;
      
    // Takeing Size of array from user      
        printf("Linear Search \nEnter the size of Array : "); 
         scanf("%d", &n);
         
    // Declaration of array
     int arr[n];
    // Initialization of array
    for(int i =0 ; i< n ; i++)     
    {
        scanf("%d", &arr[i]);
    }
  
    // Imput target value
    printf("Enter the elemnt you want to search"); 
         scanf("%d", &target); 
    
    //If target found return the exact location else return -1; 
    printf("Locatin : %d",LinearSearch(arr, n , target)); 

    return 0;
}


Output: 
Linear Search 
Enter the size of Array : 5
13 3425 56 67 32
Enter the elemnt you want to search32
Locatin : 5
  
 TimeComplexity : 
     T(n) = n + c
    **T(n) £ O(n)**
