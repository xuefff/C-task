#include <stdio.h>
int main(){
	float I;
	float bonuses;

	printf("Please enter the profits of the month:");
	scanf("%f",&I);

	if(I<=100000)
		bonuses=0.1*I;
	else if(I<=200000 && I>100000)
		bonuses=0.075*(I-100000)+100000*0.1;
	else if(I<=400000 && I>200000)
		bonuses=0.05*(I-200000)+0.075*(200000-100000)+100000*0.1;
	else if(I<=600000 && I>400000)
		bonuses=0.03*(I-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
	else if(I<=1000000 && I>600000)
		bonuses=0.015*(I-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
	else
		bonuses=0.01*(I-1000000)+0.015*(1000000-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;

	printf("The bonuses of the month is %f:",bonuses);
	return 0;
}


	