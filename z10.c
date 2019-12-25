#include<stdio.h>
int main()
{
	double f1=1.0,f2=2.0;
	int i;
	double s;
	for(i=0;i<10;i++)
	{s=s+f2/f1;
	f1=f1+f2;
	s=s+f1/f2;
	f2=f2+f1;
	}
	printf("s=%10.6f",s);
}