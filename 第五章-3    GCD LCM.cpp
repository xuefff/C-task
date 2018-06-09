#include<stdio.h>
int main()
{
	int m,n;
	int t;
	int gcd,lcm;

	printf("Please enter 2 numbers:");
	scanf("%d,%d",&m,&n);

	gcd=m*n;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}

	while(lcm=m%n)
	{
		m=n;
		n=lcm;
	}
	gcd=gcd/n;
	printf("GCD is %d\n",gcd);
	printf("LCM is %d\n",n);

	return 0;
}
