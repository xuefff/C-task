#include<stdio.h>
int main()
{
	char ch;
	int num_a=0,num_=0,num_1=0,num_else=0;

	printf("Please enter a string of characters:");
	 
	for(ch=getchar();ch!='\n';)
	{if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z'))
	{num_a++;}
	else if(ch>='0'&& ch<='9')
	{num_1++;}
	else if(ch==' ')
	{num_++;}
	else num_else++;
	ch=getchar();
	}

	printf("Ӣ����ĸ����Ϊ%d��",num_a);
	printf("�ո����Ϊ%d��",num_);
	printf("���ָ���Ϊ%d��",num_1);
	printf("�����ַ�����Ϊ%d��",num_else);

	return 0;
}
