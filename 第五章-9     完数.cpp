#include<stdio.h>
int main ()
{
	int i;
	int s=0;
	int n;

	for(n=2;n<1000;n++)
	{
		s=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				s+=i;
			}
        
		}

		if(s==n)
		{
			printf("%d its factors are ",n);
			printf("1");
			for(i=2;i<n;i++)
			{
				if(n%i==0)
				{
					printf(",%d",i);
				}
			}
			printf("\n ");
		}
	}
	return 0;
}