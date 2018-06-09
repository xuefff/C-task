#include <stdio.h>
int main()
{
	int i;
	int a[10]={1,3,4,6,7,9,10,14,18};
	int num;

	printf("The original array is:\n");
	for(i=0;i<=8;i++)
    {
        printf("%d\t",a[i]);              
     }
	printf("\n");

	printf("Please enter a number:");
	scanf("%d",&num);

	for(i=8;i>=0;i--)
	{
       if(num<a[i])
	   {
            a[i+1]=a[i];

       }
	   else
	   {
             a[i+1]=num;
             break;      
       }

    }

	printf("The result is:\n");

    for(i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);              
     }

    return 0;
}