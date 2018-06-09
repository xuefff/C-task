#include<stdio.h>
int main()
{
        int a[3][3];
        int i,j;
        int n=0;
        int sum1 = 0;
        int sum2 = 0;
        
     printf("please input numbers：\n");
     for(int i=0;i<3;i++)
     {     
		 for(int j=0;j<3;j++)
         {
			 scanf("%d",&a[i][j]);
		 }
	 }
		  
        printf("This 3*3 mattrix is：\n");   
        for(int i=0;i<3;i++)
		   {
			  for(int j=0;j<3;j++)
	           {
	           	 printf("%4d",a[i][j]);
	             
				}
				printf("\n");
		   	} 
				
        for(int i=0;i<3;i++)
          {
			  for(int j=0;j<3;j++)
	            {
	            	if(i==j) 
					sum1 += a[i][j];
		            if(j==3-i-1) 
					sum2 += a[i][j];
				}
          }
        printf("\n矩阵对角线之和分别是：");
        printf("%d",sum1);
        printf(" ");
        printf("%d",sum2);
   
	return 0;
}

