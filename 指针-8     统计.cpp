#include<stdio.h>
int j=0,k=0,l=0,m=0;
int main()
{
	char a[100],*p;
	void can(char *p);
	printf("����һ���ַ���");
	p=a;
	gets(a);
	can(p);
	printf("��д��ĸ%d��\n",j);
	printf("Сд��ĸ%d��\n",k);
	printf("����%d��\n",l);
	printf("�����ַ�%d��\n",m);
	return 0;
}
void can(char *p)
{
	for(;*p;p++)
	if((*p>='a')&&(*p<='z'))
	++k;
	else if((*p>='A')&&(*p<='Z'))
	++j;
	else if((*p>='0')&&(*p<='9'))
	++l;
	else
	++m;
}