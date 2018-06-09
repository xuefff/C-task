#include <stdio.h>
int main()
{
	int i=0,n,a[100];
	int k=0;

	printf("Please enter the numbers:");

	while(1)
	{
		scanf("%d",&n);
		char c=getchar();
		a[i++]=n;
		k++;
		if(c=='\n')
		{
			break;
		}
	}

	printf("The array is:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	for(i=0;i<=(k-1)/2;i++)
	{
		int temp;
		temp=a[i];
		a[i]=a[k-1-i];
		a[k-1-i]=temp;
	}

	printf("The result of the reverse order is:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}