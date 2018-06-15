#include <stdio.h>
int sort(char* a,char* b,char* c)
{
	int num[3];
	int i,j;
	char * p;

	for(i=0;a[i]!='\0';i++) 
    {  
		j=0;
		j++;
		num[0]=j;
	}
	for(i=0;b[i]!='\0';i++) 
    {   
		j=0;
		j++;
		num[1]=j;
	}
	for(i=0;c[i]!='\0';i++) 
    {   
		j=0;
		j++;
		num[2]=j;
	}

	if(*p>*p+1)
		*p=*a;
		*a=*b;
		*b=*p;
    if(*p+1>*p+2)
		*p=*b;
		*b=*c;
		*c=*p;
	if(*p>*p+2)
		*p=*a;
		*a=*c;
		*c=*p;
	
}
int main()
{
	char a[20],b[20],c[20];

	printf("Please enter the first string:");
    gets(a); 
	printf("Please enter the second string:");
	gets(b);
	printf("Please enter the third string:");
	gets(c);

	sort(a,b,c);
	printf ("%s\t%s\t%s", a[20],b[20],c[20]);
}