#include<stdio.h>
int main()
{
    float stu[10][5];
    float a[10];
    int i,j,t;
    float sum,max,ave;

    for (i=0; i<10; i++) {
        printf("输入第%d个学生的成绩:",i+1);
        for (j=0; j<5; j++) {
            scanf("%f",&stu[i][j]);
        }
    }

    for (i=0; i<10; i++) {
        sum=0;
        for (j=0; j<5; j++) {
            sum=sum+stu[i][j];
        }
        printf("第%d个学生的平均分：%.2f\n",i+1,ave=sum/5);
        a[i]=ave;
    }
    for (i=0; i<5; i++) {
        sum=0;
        for (j=0; j<10; j++) {
            sum=sum+stu[j][i];
        }
        printf("第%d科成绩平均分:%.2f\n",i+1,ave=sum/10);
    }
    ave=0;
    for (i=0; i<10; i++) {
        ave=ave+a[i];
    }
    ave=ave/10;
    sum=0;

	max=0;
	for (i=0; i<10; i++) 
	{
        if(max<a[i])
		max=a[i];
    }
    printf("分数最高：%f\n",max);

    for (i=0; i<10; i++) 
	{
        sum=sum+(a[i]-ave)*(a[i]-ave);
    }
    printf("平均方差：%f\n",sum/10);
    return 0;
}
