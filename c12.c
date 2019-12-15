#include<stdio.h>
#include<math.h>
int main()
{
	float fun(float a,float b,float (*p)(float));
	float f1(float x);
	float f2(float x);
	float f3(float x);
	float s1,s2,s3,c,d;
	
	printf("please enter shangxian and xiaxian\n");
	scanf("%f%f",&c,&d);
	s1=fun(c,d,f1);
	s2=fun(c,d,f2);
	s3=fun(c,d,f3);	
	printf("%f\n%f\n%f\n",s1,s2,s3);
}
float fun(float a,float b,float (*p)(float))
{
	float s=0,h,x=a;
	int n=30,i;
	h=(b-a)/n;
	for(i=1;i<=n;i++)
	{	x=x+h;
		//s=s+((*p)(x-h)+(*p)(x))*h/2.0;
		s=s+(*p)(x)*h;
	}
	return s;
}
float f1(float x)
{
	return(sin(x));
}
float f2(float x)
{

	return(cos(x));
}
float f3(float x)
{
	return(exp(x));
} 