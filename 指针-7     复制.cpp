#include<stdio.h>
int main()
{
    void cpoy(char *from,char *to);
    char *a="I am a teacher.",b[]="You are a student.";//*a��b[]
    char *b1=b;//��b��ֵ��b1

    printf("a[]=%s\n",a);
    printf("b[]=%s\n",b);
    cpoy(a,b1);//��a�е��ַ������Ƶ�b�У�����ǰ���õ���b1=b
    printf("���ƺ�b[]=%s\n",b);
    return 0;
}

void cpoy(char *from,char *to)
{
    for(;*from!='\0';from++,to++)
        *to=*from;
    *to='\0';
}