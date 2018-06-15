#include<stdio.h>
int main()
{
    void cpoy(char *from,char *to);
    char *a="I am a teacher.",b[]="You are a student.";//*a与b[]
    char *b1=b;//把b的值给b1

    printf("a[]=%s\n",a);
    printf("b[]=%s\n",b);
    cpoy(a,b1);//把a中的字符串复制到b中，这里前面用到的b1=b
    printf("复制后b[]=%s\n",b);
    return 0;
}

void cpoy(char *from,char *to)
{
    for(;*from!='\0';from++,to++)
        *to=*from;
    *to='\0';
}