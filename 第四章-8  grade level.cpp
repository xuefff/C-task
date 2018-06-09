#include<stdio.h>
int main()
{
	int score;

	printf("Please enter your score.");
	scanf("%d",&score);

	if(score>=90)
    printf("\nYour grade is\'A\'.");
	else if(score>=80&&score<=89)
    printf("\nYour grade is\'B\'.");
	else if(score>=70&&score<=79)
    printf("\nYour grade is\'C\'.");
	else if(score>=60&&score<=69)
    printf("\nYour grade is\'D\'.");
    else 
    printf("\nYour grade is\'E\'.");

return 0;
}
