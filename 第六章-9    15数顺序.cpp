#include <stdio.h>
int main()
{
	int i,j;
	int n;
	int a[15];
	int low,mid,high;
	int k=0;

    low=1;
	high=15;

	printf("请根据提示输入15个数\n");

	for(i=0; i<15; i++)
	{
       printf("第%d个元素", i+1);
	   scanf("%d", &a[i]);
	}

	printf("数按从大到小的顺序，数组是：\n");

	for(i=0;i<15;i++)
	{
		for(j=i; j<14; j++)
		{
		   if (a[i] < a[j+1])
		   {
			   int t;
			   t=a[i];
			   a[i]=a[j+1];
			   a[j+1]=t;
		   }
		}
		printf("%5d",a[i]);
	}
	printf("\n");

	printf("请输入1个数:\n");
	scanf("%d", &n);

	while (low<=high)
	{
		mid=(low+high)/2;

		if (n<a[mid-1])
            low=mid+1;
			
		else if(n>a[mid-1])
		{
			high=mid-1;
		}
		else
		{
			k=mid;
			for(i=low; i<=high; i++)
	        {
			   if (a[i]==n)
				{
					printf("数%d是数组中第%d个元素的值。\n",n,i+1);
				}
			}
			break;
		}
	}

    if (k==0)
	{
		printf("无此数\n");
	}

	return 0;
}