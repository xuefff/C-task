#include <stdio.h>
int main()
{
	int i=0;
	char n;
	char a[100];
	int k=0;

	printf("Please enter the password:");

	while(1)
	{
		char c=getchar();
		a[i++]=c;
		k++;
		if(c=='\n')
		{
			break;
		}
	}
	
	printf("The password is:\n");
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");

	for(i=0;i<k;i++)
	{
		if(a[i]>='a' && a[i]<='z')
        {
            int t=26-a[i]+'a'-1;
            t%=26;
            t+='a';
            a[i]=t;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            int t=26-a[i]+'A'-1;
            t%=26;
            t+='A';
            a[i]=t;
        }
    }
    
	printf("The original text is:\n");
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");

	return 0;
}