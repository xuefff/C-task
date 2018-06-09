#include <stdio.h>
int main()
{
	float num;
	float sq;
	int i=100;
	
	printf("Enter a positive number less than 1000:");
	scanf("%f",&num);
	while (num <=0||num>=1000||num-(int)num!=0 )
	{
    	printf("Please enter a positive number less than 1000:"); 
    	scanf("%f",&num);
     }	
    	
	 sq=num/2;
	 while(i--)
	   {
	    	sq=(sq+num/sq)/2; 
		}
     sq=(int)sq;  
     printf("The square root of %f is %f\n",num,sq); 
 
	return 0;
}