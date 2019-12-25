#include<stdio.h>
void main()
{
	int n,k,m,j;
	for(n=100;n<1000;n++)
	{
		k=n/100;
		m=(n/10)%10;
		j=n%10;
		if(n==(k*k*k+m*m*m+j*j*j))
			printf("%5d",n);	
	}
}	