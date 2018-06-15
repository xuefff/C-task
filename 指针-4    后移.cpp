#include <stdio.h>
int n,m;
int main()
{
    void exchange(int*,int,int);
    int a[100],i,*p=a;
    printf("input length and number:\n");
    scanf("%d%d",&n,&m);       // ‰»În,m
    printf("input array:\n");
    for(i=0;i<n;i++)
       scanf("%d",p+i);
    printf("new array:\n");
    exchange(a,n,m);
    for(i=0;i<n;i++)
       printf("%d ",*(p+i));
    return(0);
}

void exchange(int* a,int n,int m)
{
    int i,k,*p=a,temp;
    for(i=n-m-1;i>0;i--)
    {
        for(k=i+1,*p=i;k<=(i+m);k++,p++)
        {
            temp=*p;
            *p=*(p+k);
            *(p+k)=temp;
        }
    }
}