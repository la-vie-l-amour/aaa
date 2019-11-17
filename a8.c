#include<stdio.h>
int main()
{
	int i,j;
	int a[3][4]={12,23,45,33,1};
	int (*p)[4];
	p=a;
	
	for(i=0;i<3;i++)
	  { for(j=0;j<4;j++)
	         printf("%5d",*(*(p+i)+j));
	    printf("\n");
	}

}