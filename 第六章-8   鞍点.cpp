#include<stdio.h>
int main() 
{  
    int a[3][3]; 
    int i, j;
    int max[3], min[3];
	int k=0;

    printf("请根据提示输入二维数组。\n");
 
    for (i=0;i<3;i++)
         for (j=0;j< 3;j++)
         {
             printf("a[%d][%d]=",i,j);
             scanf("%d", &a[i][j]);
         }
   
     for (i = 0;i < 3;i++)
     {
         for (j = 0;j <3;j++)
         {    
			 printf("%d\t", a[i][j]);
		 }
		 printf("\n");
     }
 
     for (i = 0;i < 3;i++)
     {
         max[i] = a[i][0];   
         min[i] = a[0][i];   
         for (j = 0;j < 3;j++)
         {
             if (max[i] < a[i][j])    max[i] = a[i][j];
             if (min[i] > a[j][i])    min[i] = a[j][i];
         }
     }

     for (i = 0;i < 3;i++)
     {
         for (j = 0;j <3;j++)
         {
             if (a[i][j]==max[i] && a[i][j]==min[j])
                printf("这个二维数组的鞍点为a[%d][%d]=%d\n",i,j,a[i][j]);
             else
                k++;
         }
     }

     if (k==9)
	 {
         printf("这个数组中没有鞍点.\n");
     }

    return 0;
} 