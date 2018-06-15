#include<stdio.h>
int strlen(char *s)
{
    int i=0;
    while(*s!='\0')
    {
        i++;
        s++;
    }
    return i;
}

void main()
{
    char *str;
    int len;

    printf("please input your string:");
    gets(str);
    len=strlen(str);
    printf("the length of str is:%d\n",len);
}