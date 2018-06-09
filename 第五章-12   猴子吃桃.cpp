#include<stdio.h>
int main()
{
	int i;
	int n=1;

	for(i=1;i<=9;i++)
	{
		n+=1;
		n=n*2;
	}
    printf("第一天共摘了%d个桃子。\n",n);
return 0;
}