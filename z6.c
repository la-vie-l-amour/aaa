#include<stdio.h>
int main()
{
	int i,k=1,s=0;
	for(i=1;i<=20;i++)
	{
		k=k*i;
		s=s+k;	
	}
	printf("s=%d",s);
}