#include<stdio.h>
int main ()
{
	int a,b,c;
	int n,m;

	for(n=100;n<=999;n++)
	{ 
		a=n%1000/100;
		b=n%100/10;
		c=n%10;
        m=a*a*a+b*b*b+c*c*c;
	    if(m==n)
		{
			printf("%d\n",n);
		}
	}

    return 0;
}