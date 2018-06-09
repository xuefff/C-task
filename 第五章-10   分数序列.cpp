#include<stdio.h>
int main ()
{
	float i,j;
	int k,m;
	float s=0;

	i=1;
	j=2;

	for(k=1;k<=20;k++)
	{
		s+=j/i;
		m=i;
		i=j;
	    j+=m;
	}

	printf("The result is %f\n",s);
	return 0;
}