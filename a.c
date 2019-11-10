#include<stdio.h>
int main()
{
	float a,b,c,t;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
		if(b>c)
		{
			t=b;
			b=c;
			c=t;
		}
			if(a>c)
			{
				t=c;
				c=a;
				a=t;
			}
	printf("%f,%f,%f",a,b,c);
                return 0;
} 