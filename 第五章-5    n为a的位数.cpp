#include<stdio.h>
int main()
{
	int a;
	int n;
	int i,j;
	int an=1;
	int sn=0;

	printf("Please enter the digit, n:");
	scanf("%d",&n); 
	printf("Please enter the number, a:");
	scanf("%d",&a);

	for(i=1;i<=n;i++)
	{	
	an=an*a;
	sn=sn+an;
	}

	printf("/nThe result is %d¡£",sn);
	
	return 0;
}
