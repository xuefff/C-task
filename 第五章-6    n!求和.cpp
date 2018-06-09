#include<stdio.h>
int main()
{
	int i;
	float sn=0;
	float n=1;

	for(i=1;i<=20;i++)
	{
    n=n*i;
	sn=sn+n;
	}
	printf("1!+2!+...19!+20!= %f\n",sn);

	return 0;
}
