#include<stdio.h>
int main()
{
    void order(int a[10]);
    int a[10],i;

    printf("please input 10 numbers:\n");

    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("output the numbers:\n");
    order(a);

    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void order(int a[10])
{
    int i,j,k;

    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
}