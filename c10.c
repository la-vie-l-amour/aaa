#include<stdio.h>
#include<math.h>
int main()
{
	float integral(float a,float b,float(*fun)(float));
	float f1(float x);
	float f2(float x);
	float f3(float x);
	float f4(float x);
	float f5(float x);
	float c,d,b1,b2,b3,b4,b5;
	printf("please enter shangxian and xiaxian\n");
	scanf("%f%f",&c,&d);
	b1=integral(c,d,f1);
	b2=integral(c,d,f2);
	b3=integral(c,d,f3);
	b4=integral(c,d,f4);
	b5=integral(c,d,f5);	
	printf("%5.5f\n%5.5f\n%5.5f\n%5.5f\n%5.5f\n",b1,b2,b3,b4,b5);
}
float integral(float a,float b,float(*fun)(float))
{
	int n=20,i;
	float s=0,h,x=a;
	h=(b-a)/n;
	for(i=1;i<=n;i++)
	{  x=x+h;
	   s=s+(*fun)(x)*h;
	}
	return s;
}
float f1(float x)
{
	return(1+x);
}
float f2(float x)
{
	return(2*x+3);
}
float f3(float x)
{
	return(exp(x)+1);
}
float f4(float x)
{
	return(pow(x+1,2));
}
float f5(float x)
{
	return(pow(x,3));
}
