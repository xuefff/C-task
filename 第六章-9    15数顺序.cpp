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

	printf("�������ʾ����15����\n");

	for(i=0; i<15; i++)
	{
       printf("��%d��Ԫ��", i+1);
	   scanf("%d", &a[i]);
	}

	printf("�����Ӵ�С��˳�������ǣ�\n");

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

	printf("������1����:\n");
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
					printf("��%d�������е�%d��Ԫ�ص�ֵ��\n",n,i+1);
				}
			}
			break;
		}
	}

    if (k==0)
	{
		printf("�޴���\n");
	}

	return 0;
}