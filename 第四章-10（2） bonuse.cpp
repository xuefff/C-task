#include <stdio.h>
int main(){
	int I;
	int a;
	int bonuses;

	printf("Please enter the profits of the month:");
	scanf("%d",&I);

	a=(I-1)/100000;
	if( a>10)
		a=10;

	switch(a)
	{
	case 0:
		bonuses=0.1*I;
		break;
	case 1:
		bonuses=0.075*(I-100000)+100000*0.1;
		break;
	case 2:
		bonuses=0.05*(I-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 3:
		bonuses=0.05*(I-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 4:
		bonuses=0.03*(I-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 5:
		bonuses=0.03*(I-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 6:
		bonuses=0.015*(I-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 7:
		bonuses=0.015*(I-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 8:
		bonuses=0.015*(I-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 9:
		bonuses=0.015*(I-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	case 10:
		bonuses=0.01*(I-1000000)+0.015*(1000000-600000)+0.03*(600000-400000)+0.05*(400000-200000)+0.075*(200000-100000)+100000*0.1;
		break;
	default:
		break;
	}
	printf("\nThe bonuses of the month is %d.",bonuses);
	return 0;
}


	