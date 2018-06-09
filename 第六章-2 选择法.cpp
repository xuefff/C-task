#include <stdio.h>  
int main()  
{  
    int i,j,min,temp,a[11]; 
	 
    printf("Please enter 10 numbers:\n"); 

	for(i=1;i<=10;i++)  
	{  
	     scanf("%d",&a[i]);  
	}  
	printf("\n");   
	    
	for(i=1;i<=9;i++)  
	{  
	     min=i;  
	     for(j=i+1;j<=10;j++)  
	     {  
	         if(a[min]>a[j])  
	         {  
	             min=j;  
	         }  
	     }  
	     temp=a[i];  
	     a[i]=a[min];  
	     a[min]=temp;  
	              
	}  
    
    printf("\nThe result of ordering from small to large is:\n");  
	for(i=1;i<=10;i++)  
    {
	     printf("%5d",a[i]);
	}
	printf("\n");  
    
    return 0;  
}  
