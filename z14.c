#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x0;
	x0=1.5;
	x1=(4*x0*x0*x0-4*x0*x0+6)/(6*x0*x0-8*x0+3);
	while(fabs(x1-x0)>=1e-6)
	{
		x0=x1;
		x1=(4*x0*x0*x0-4*x0*x0+6)/(6*x0*x0-8*x0+3);
	}
	printf("%f",x1);
}