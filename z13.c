#include<stdio.h>
#include<math.h>
int main()
{
	float a,x1,x0;
	printf("please input a positive zhi:");
	scanf("%f",&a);
	x0=a/2;
	x1=(x0+a/x0)/2;
	while(fabs(x1-x0)>=1e-5)
	{	x0=x1;
		x1=(x0+a/x0)/2;
	}
	printf("x1=%f",x1);
}