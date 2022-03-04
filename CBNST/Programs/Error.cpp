//WAP to find Error (Absolute(Ea) ,Relative(Er) , Percentage(Ep)) .
// function used [abs()] for absolute value or Mod for integer value
//      [fabs()] to calculate absolute value or Mod value for Floating point.

#include"iostream"
#include"math.h"
int main()
{  
  float Tv, Av , Ea , Er , Ep; 
	printf("Enter True value ");
	scanf("%f",&Tv);
	
	printf("Enter Absolute  value ");
	scanf("%f",&Av);
	
  
	Ea = abs(Tv-Av);
	printf("Absolute  error(abs) =  %d",Ea);
	
	Ea = fabs(Tv-Av);
    printf("\nAbsolute  error(fabs) =  %f",Ea);
    
    Er = abs(Tv-Av) / Tv;
	   printf("\nRelative  error(abs) =  %d",Er);
	
	  Er = fabs(Tv-Av) / Tv;
    printf("\nRelative  error(fabs) =  %f",Er);
    
    Ep = (abs(Tv-Av)/Tv)*100;
	   printf("\nPercentage  error(abs) =  %d %% ",Ep);
	
  	Ep = (fabs(Tv-Av)/Tv)*100;
    printf("\nPercentage  error(fabs) =  %f %%",Ep);
}
