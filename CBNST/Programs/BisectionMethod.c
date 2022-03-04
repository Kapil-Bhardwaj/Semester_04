//Practical No. 2
//B.tech Cse
//200111366 Kapil_Bhardwaj
//WAP To show use of Bisection method for the Equation " x^3 -4x - 9 = 0 "
#include"iostream"
#include"math.h"
float f(float x) // to calculate the value of F(x)
{
	return (x*x*x - 4*x -9);
}
int main()
{
	float  x0 , x1 , x ,error;
	int count_itr = 0 ;
	//Do-While-loop to check where the root lies
	do{
	 printf("\nEnter the value of x0 and x1 :  ");
	 scanf("%f%f",&x0 ,&x1); 
	} while(f(x0)*f(x1)>0);
	
	printf("\n\nRoot lies Between %1f and %1f ",x0 ,x1);
	
	printf("\n\nEnter Error validation : ");
	scanf("%f",&error);
	
	do{
		count_itr++;
	
		x = (x0 + x1) / 2;
		 printf("\n\nAfter iteration %d Value of x0 = %f and Value of x1 = %f ",count_itr , x0 , x1);
		
		if(fabs(f(x)) < error) 
		{   
			printf("\n\n%f is the root of equation x^3 -4x -9 and Reached after %dth iteration ",x,count_itr);
			exit(0);
		}
		else if(f(x)<0	)
		{
			x0 = x ;
		 } else
		     x1= x;
		if(count_itr > 30)
		   exit(0);     
	}while(1);
	
}


