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
    printf("������%f�ס�\n",s);
	printf("��ʮ�η���%f�ס�\n",height);
return 0;
}
