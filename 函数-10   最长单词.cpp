#include <stdio.h>
#include <string.h>
void longword(char s[], char t[]);                 //定义最长单词函数
int main()
{
    char str[30], lg[20];
	gets(str);  
    longword(str, lg);                             //调用最长单词函数
    puts(lg);                                      //输出最长单词
    return 0;
}
//最长单词函数
void longword(char s[], char t[])
{
    int i, j, n, k, m, word;
    char p[20];
    n=strlen(s);
    m=0;
    word=0;
    for (i=0, j=0, k=0; i<=n; i++)
	{
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            word=1;
            p[j++]=s[i];
        }
        else if (word==1)
		{
            if (j>k)
			{
                for (m=0; m<j; m++)
                    t[m]=p[m];
                t[m]='\0';
                k=j;
            }
            word=0;
            j=0;
        }
    }
}