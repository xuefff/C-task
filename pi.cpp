#include <stdio.h>
#define PI 3.1415926f
int main(void)
{
	float radius = 0.0f;
	float area = 0.0f;

	printf("Input the radius of a table:");
	scanf("%f",&radius);

	area = PI*radius*radius;

	printf("\nThe PI is %.2f.  ",PI);
    printf("The radius is %.2f.",radius);
    printf("\nThe area is %.2f.\n",area);
    return 0;
}