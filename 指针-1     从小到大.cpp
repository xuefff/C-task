#include <stdio.h>
void sort(int* p, int n)
{
	int* q = p;
	int temp;
	int i,j;

	for (i=0; i<n-1; i++)
	{
		for (j=n-i; j>1;j--)
		{
			if (*p > *(p+1))
			{
				temp = *p;
				*p = *(p+1);
				*(p+1) = temp;
				p++;
			}
	    }
	    p = q;
	}
}
void main()
{
	int num[3];
	int i;

	for (i=0; i<3; i++)
	scanf("%d", &num[i]);
	sort(num, 3);
	for (i=0; i<3; i++)
	printf ("%d", num[i]);
}