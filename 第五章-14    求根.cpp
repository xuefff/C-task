#include <stdio.h>
#include<math.h> 
int main()
{
	double x,x0,f,f1;
	x=1.5;

	do
	{
		 x0=x;
		 f=2*x*x*x-4*x*x+3*x-6;
		 f1=6*x*x-8*x+3;
		 x=x0-f/f1;
	}while(fabs(x-x0)>0.00001);

     printf("The result is %lf\n",x); 
 
	return 0;
}
