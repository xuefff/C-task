#include<stdio.h>  
int main()
{
	int i,j;
	int a[101];
	int n=0;

	for(i=1;i<=100;i++)
	{
		a[i]=i;
		a[1]=0;
	}
	
	for(i=2;i<100;i++)
	{ 
		for(j=i+1;j<=100;j++)
		{
			if(a[i]!=0 && a[j]!=0)
			{
				if(a[j]%i==0)
			    a[j]=0;
			}
		}
	} 
    printf("\n");
    
	for(i=2;i<=100;i++)
		{
			if(a[i]!=0)
			{
				printf("%2d",a[i]);
				printf(" ");
				n++;
			}
			if(n==5)
			{
				printf("\n");
				n=0;
			}
		}
		
	return 0;
}

