#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	
	printf("Please enter the first number:");
	scanf("%d",&a);
	printf("Please enter the second number:");
	scanf("%d",&b);
	printf("Please enter the third number:");
	scanf("%d",&c);
	printf("Please enter the fourth number:");
	scanf("%d",&d);

	if(a>b)
	{e=a;
	a=b;
	b=e;
	}
	if(a>c)
	{e=a;
	a=c;
	c=e;
	}
	if(a>d)
	{e=a;
	a=d;
	d=e;
	}
	if(b>c)
	{e=c;
	c=b;
	b=e;
	}
	if(b>d)
	{e=d;
	d=b;
	b=e;
	}
	if(c>d)
	{e=c;
	c=d;
	d=e;
	}

	printf("The order from small to large is:");
	printf("%d,%d,%d,%d",a,b,c,d);

	return 0;
}