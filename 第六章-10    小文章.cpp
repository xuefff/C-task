#include<stdio.h>
int main() 
{  
    char a[3][80]; 
	int i,j;
	char ch;
	int num_a=0,num_A=0,num_=0,num_1=0,num_else=0;

	for(i=0;i<3;i++)
	{	
		gets(a[i]);
		for(j=0;j<80;j++)
		{	
			ch=a[i][j];
			if(ch>='a'&& ch<='z')
			{
				num_a++;
			}
			else if(ch>='A'&& ch<='Z')
			{
				num_A++;
			}
			else if(ch>='0'&& ch<='9')
			{
				num_1++;
			}
			else if(ch==' ')
			{
				num_++;
			}
			else num_else++;
		}
	}

	printf("小写字母个数为%d。\n",num_a);
	printf("大写字母个数为%d。\n",num_A);
	printf("空格个数为%d。\n",num_);
	printf("数字个数为%d。\n",num_1);
	printf("其他字符个数为%d。\n",num_else);
 
    return 0;
} 