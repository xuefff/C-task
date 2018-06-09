#include <stdio.h>
int main()
{
	int i=0;
	char s1[100];
	char s2[100];
	int k=0;

	printf("Please enter the s2:");

	while(1)
	{
		char c=getchar();
		s2[i++]=c;
		k++;
		if(c=='\n')
		{
			break;
		}
	}
	
	
	for(i=0;i<k;i++)
	{
		s1[i]=s2[i];
		
    }
    
	printf("The s1 is:");
	for(i=0;i<k;i++)
	{
		printf("%c",s1[i]);
	}
	
	return 0;
}