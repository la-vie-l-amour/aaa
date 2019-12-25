#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		
		for(j=1;j<=4-i;j++)
			printf(" ");
		while(j>4-i&&j<=i+3)
		{	printf("*");
			j++;
		}	
		printf("\n");
	}
	for(i=5;i<=7;i++)
	{
		for(j=1;j<=i-4;j++)
			printf(" ");
		while(j<=11-i&&j>=i-3)
		{	printf("*");
			j++;
		}
		printf("\n");
	}

}