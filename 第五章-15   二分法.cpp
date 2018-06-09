#include<stdio.h>  
#include<math.h>  
  
int main() 
{  
    double x1, x2, x0, f1,f2,f0;  
    x1=-10;
	x2=10;  
	f1=2*x1*x1*x1-4*x1*x1+3*x1-6; 
	f2=2*x2*x2*x2-4*x2*x2+3*x2-6; 
    do{  
        x0=(x1+x2)/2;  
        f0=2*x0*x0*x0-4*x0*x0+3*x0-6;  
        if((f0*f1)<0) 
		{  
            x2 = x0;  
            f2 = f0;  
        } 
		else 
		{  
            x1 = x0;  
            f1 = f0;  
        }  
    } while (fabs(f0) > 1e-5);  

    printf("The result is%f.\n", x0); 

    return 0;  
}  