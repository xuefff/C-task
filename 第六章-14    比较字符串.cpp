#include <stdio.h>
int main()
{
	int i=0;
	char a[100];
	char b[100];

	printf("Please enter the first string:");
    gets(a); 
	
	printf("Please enter the second string:");
	gets(b); 

	printf("The result of comparison is:");
	for(i=0;a[i]!='\0'||b[i]!='\0';i++) 
    {   
		if(a[i]!=b[i])
		{
			printf("%d\n",b[i]-a[i]);
		    break; 
		}  
	}
	return 0;
}
	