#include <stdio.h>
int main()
{
	float a;
	double x1,x2;
	
	printf("Enter a positive number :");
	scanf("%f",&a);

	x2=a;

	do
	{
		 x1=x2;
		 x2=(x2+a/x2)/2;
	}while(x1-x2>0.00001);

     printf("The square root of %f is %f\n",a,x2); 
 
	return 0;
}