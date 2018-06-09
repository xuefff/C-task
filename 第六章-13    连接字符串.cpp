#include <stdio.h>
int main()
{
	int i=0;
	char a[100];
	char b[100];
	int k1=0,k2=0;

	printf("Please enter the first string:");

	while(1)
	{
		char c=getchar();
		a[i++]=c;
		k1++;
		if(c=='\n')
		{
			break;
		}
	}
	
	printf("Please enter the second string:");
	i=0;
	while(1)
	{
		char c=getchar();
		b[i++]=c;
		k2++;
		if(c=='\n')
		{
			break;
		}
	}
	
	k1--;
	k2--;
	for(i=k1;i<k1+k2;i++)
	{
		a[i]=b[i-k1];
		
    }
    
	printf("The result of string connection is:\n");

	for(i=0;i<k1+k2;i++)
	{
		printf("%c",a[i]);
	}

	return 0;
}