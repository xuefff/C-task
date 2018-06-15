#include<stdio.h>
int main(int argc, char *argv[])
{
    int i, j = 0, k = 0, n;
    int a[30] = {0};
    printf("请输入有几个人玩游戏:");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        a[i] = 1;//1代表活着，0代表出局
    }
    for (i=1; i<4; i=i%3+1)//控制i的值在[0，3]
    {
        if (3==i && a[j]!=0)
        {
            a[j] = 0;
            printf("%d号玩家出局\n", j+1);
            k++;
            if (n-1 == k)
            break;
            j = (j+1)%n;
            continue;
        }
        if (0 == a[j])
        {
            j = (j+1)%n;
            i--;
            continue; 
        }
        j = (j+1)%n;
    }        
    for (i=0; i<n; i++)
    {
        if (1 == a[i])
        printf("%d号玩家活到的最后\n", i+1);
    }
}