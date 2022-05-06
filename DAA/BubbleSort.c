Name: Kapil Kumar Bahrdwaj
Course: B.tech C.S.E
Batch: 2020 -2024
R.No. : 200111366
Date : 04/05/2021
  
  Objective : Implementation of Bubble Sort
  
 Agorithm: 
BubbleSort( arr[], n) 
{  
   countSwap =0 ;
    for i<- 0 to n
    {
        int flag = 0 ;
        for j <- 0 to n-i
        {
            if(arr[j-1] > arr[j])
            {   
                countSwap++;
                
                flag =1;
                
                {
                    int temp = arr[j-1] ;
                     arr[j-1] = arr[j];
                      arr[j] = temp;
                }
                
            }
        }
             if(flag == 0 )
                break;
        
       
    }
    print- countSwap
  
}

Program: 
  #include<stdio.h>

// function to swap two values
void Swap(int a , int b)
{
    int temp = b ;
      b = a;
      a = temp;
}

// function to perform linear search
void BubbleSort(int arr[],int n) 
{  
   int countSwap =0 ;
    for(int i = 0 ; i < n ; i++ )
    {
        int flag = 0 ;
        for( int  j = 1 ; j < n - i  ; j++ )
        {
            if(arr[j-1] > arr[j])
            {   
                countSwap++;
                
                flag =1;
                
                {
                    int temp = arr[j-1] ;
                     arr[j-1] = arr[j];
                      arr[j] = temp;
                }
                
            }
        }
             if(flag == 0 )
                break;
        
       
    }
    printf("Total No. of Swap : %d\n",countSwap);
  
}

int main()
{   
    
    int n , target;
      
    // Takeing Size of array from user      
        printf("Bouble sort\nEnter the size of Array : "); 
         scanf("%d", &n);
         
    // Declaration of array
     int arr[n-1];
    // Initialization of array
    for(int i =0 ; i< n; i++)     
    {
        scanf("%d", &arr[i]);
    }
  
    

    
    //Caling our sort function; 
         BubbleSort(arr, n );
         
    // Printing  array
    for(int i =0 ; i< n ; i++)     
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

Output: 

Bouble sort
Enter the size of Array : 10
213 567 234 8 43 98  324 8 543 765
Total No. of Swap : 18
8 8 43 98 213 234 324 543 567 765 

...Program finished with exit code 0
Press ENTER to exit console.
  
  
 TimeComplexity : 
     T(n) = n * [n + c +c + c]
    **T(n) £ O(n^2)**
