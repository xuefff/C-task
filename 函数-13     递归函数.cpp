#include <stdio.h>
int main()
{
	 int n;
	 printf("input n :");
	 scanf("%d",&n);
	 float x;
	 printf("input x :");
	 scanf("%f",&x);
	 printf("%f",p(x,n));
}
float p(float x,int n)
{
	 float p_n;
	 if(0==n)
		 p_n=1;
	 else if(1==n)
		 p_n=x;
	 else
		 p_n=((2*n-1)*x-p(x,n-1)-(n-1)*p(x,n-2))/n;
	 return p_n;
}
