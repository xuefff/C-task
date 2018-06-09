#include <stdio.h>
int main() 
{ 
	int i,j;
	char str[5][9]; 

	for(i=0;i<5;i++) 
	{
		for(j=0;j<9;j++) 
		{
			if(j>=i && j<=i+4)
				str[i][j]='*';
			else
				str[i][j]=' ';
		}
	}

	for(i=0;i<5;i++) 
	{
		for(j=0;j<9;j++) 
		{
			printf("%c\t",str[i][j]);
		}
		printf(" \n");
    }
	return 0;
}
