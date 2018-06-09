#include<stdio.h>
int main()
{
	float x,y;
	int height;
	float a1,a2,a3,a4;

	printf("Please enter the abscissa:");
	scanf("%f",&x);
	printf("Please enter the ordinate:");
	scanf("%f",&y);

	a1=(x-2)*(x-2)+(y-2)*(y-2);
	a2=(x-2)*(x-2)+(y+2)*(y+2);
	a3=(x+2)*(x+2)+(y+2)*(y+2);
	a4=(x+2)*(x+2)+(y-2)*(y-2);

	if(a1>1 && a2>1 && a3>1 && a4>1)
		height=0;
	else
	    height=10;

	printf("Height is %d",height);
 
	return 0;
}
