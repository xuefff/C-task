#include<stdio.h>
int j=0,k=0,l=0,m=0;
int main()
{
	char a[100],*p;
	void can(char *p);
	printf("输入一个字符串");
	p=a;
	gets(a);
	can(p);
	printf("大写字母%d个\n",j);
	printf("小写字母%d个\n",k);
	printf("数字%d个\n",l);
	printf("其他字符%d个\n",m);
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