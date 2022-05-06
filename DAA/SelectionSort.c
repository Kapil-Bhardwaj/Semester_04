Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 08/04/2022
  
  Objective : Implementation of Selection  Sort
  
 Agorithm: 
SelectionSort(int arr[],int n) 
{  

    for i<- 0  to n-1
       {
               
              int smallest =  i; 
        for j <- i+1 to n-1
        {
             if(arr[smallest] > arr[j])
             {
                 smallest = j;
             }
        }
        if( i < smallest )
        {
          Swap(&arr[smallest] ,&arr[i]);
        }
    }
 
  
}

    Program: 
 #include<stdio.h>

// function to swap two values
void Swap(int *a , int *b)
{
    int temp = *b ;
      *b = *a;
      *a = temp;
}

// function to perform linear search
void SelectionSort(int arr[],int n) 
{  

    for(int i = 0 ; i < n ; i++ )
       {
               
              int smallest =  i; 
        for( int  j = i+1 ; j < n   ; j++ )
        {
             if(arr[smallest] > arr[j])
             {
                 smallest = j;
             }
        }
        if( i < smallest )
        {
          Swap(&arr[smallest] ,&arr[i]);
        }
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
  
    

    
    //Caling our sort function; 
         SelectionSort(arr, n );
         
    // Printing  array
    for(int i =0 ; i< n ; i++)     
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


Output: 
Selection sort
Enter the size of Array : 8 
123 543 432 765 342 76 32 65   
32 65 76 123 342 432 543 765 
  
...Program finished with exit code 0
Press ENTER to exit console.
  
  
 TimeComplexity : 
     T(n) = n * [n + c +c + c]
    **T(n) £ O(n^2)**
