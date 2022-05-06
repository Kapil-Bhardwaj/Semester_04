#include<stdio.h>
void margeArray(int arr[],int low,int mid,int high)
 {
   
     int i=low,j=mid+1;
      int k=low;
      int b[10];
     while(i<=mid && j<=high)
     {
         if(arr[i]<arr[j])
         {
             b[k] = arr[i];
             i++;
         }
         else
         {
             b[k] = arr[j];
              j++;
         }
         k++;
     }
     while(i<=mid)
     {
         b[k]=arr[i];
         k++;
         i++;
     }
     while(j<=high)
     {
         b[k]=arr[j];
         j++;
         k++;
     }
     for(i=low;i<=high;i++)
     {
         arr[i]=b[i]; 
     }
 }

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

