#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,f1,f2,f,x;
	printf("please input -10-10 x1,x2");
	scanf("%f%f",&x1,&x2);
	 f1=2*x1*x1*x1-4*x1*x1+3*x1-6;
	 f2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	while(f1*f2>0)
	{printf("please input x1,x2");
	 scanf("%f%f",&x1,&x2);
	 f1=2*x1*x1*x1-4*x1*x1+3*x1-6;
	 f2=2*x2*x2*x2-4*x2*x2+3*x2-6;
	}	
	while(fabs(x1-x2)>=1e-6)
	{ x=(x1+x2)/2;
	  f=2*x*x*x-4*x*x+3*x-6;
	  if(f*f1<0)
		x2=x;
	  else  x1=x;
	}

	printf("%f",x1);
}