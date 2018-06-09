#include <stdio.h>
int main()
{
	int a;
	int num;
	int digit=0;
	int i=0;
	int arr[5];
	int left=0;
	int right=0;

	int j=0;
	
	printf("Please enter a positive integer with no more than five bits:");
	scanf("%d",&a);
	num=a;
	
	while(a<=0 || a>=100000|| a-(int)a!=0)
	{	
		printf("Please enter a positive integer with no more than five bits:");
		scanf("%d",a);
	}

	while(a)
	{
		digit++;
		a/=10;
	}
	if(digit==1)
		printf("It is a single digit.\n");
	else
		printf("It is %d digits.\n",digit);

a=num;		
while (a) 
  {
	 arr[i] = a % 10;
	  a = a / 10; 
	  i++; 
	  } 
	  
	right = i - 1; 
	
	while (left < right) 
	{ 
		int tmp = arr[left]; 
		arr[left] = arr[right]; 
		arr[right] = tmp; 
		left++; 
		right--;
	 } 
	
	 for (j = 0; j < i; j++) 
	 { 
	 printf("%d ", arr[j]); 
 } 
     printf("\n"); 
     
     for (j = i-1; j >-1; j--) 
	 { 
	 printf("%d ", arr[j]); 
 } 
     printf("\n"); 
 
		
	return 0;
	
}
