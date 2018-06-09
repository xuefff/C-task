#include<stdio.h>
int main()
{
	int i;
	float height=100;
	float s=100;

	for(i=1;i<=10;i++)
	{
		s+=2*height;
		height=height/2;
	}
    printf("共经过%f米。\n",s);
	printf("第十次反弹%f米。\n",height);
return 0;
}
