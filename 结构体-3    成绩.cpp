#include <stdio.h>

struct student
{
    int num;
    char name[20];
    float score[3];
} stu[3];

void print(struct student stu[]);

int main()
{
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("please enter the num:\n");
        scanf("%d",&stu[i].num);
        printf("please enter the name:\n");
        scanf("%s",stu[i].name);
        printf("please enter the score:\n");
        for(j=0; j<3; j++)
            scanf("%f",&stu[i].score[j]);
    }
    print(stu);
    printf("\n");
    return 0;
}
void print(struct student stu[])
{
    int i,j;
    for(i=0; i<3; i++)
    {
        printf("num:%d\nname:%s\n",stu[i].num,stu[i].name);
        printf("the three score:");
        for(j=0; j<3; j++)
            printf("%f ",stu[i].score[j]);
        printf("\n");
    }
}