#include<stdio.h>
void main()
{
	float s=0,k=100;
	int i;
	for(i=0;i<10;i++)
	{
		s=2*k+s;
		k=k/2;
	}
	printf("k=%f\ts=%f\t",k,s-100);
}