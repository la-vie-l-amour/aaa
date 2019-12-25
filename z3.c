#include<stdio.h>
void main()
{
	int a,b,gy,g,i,t;
	printf("please input a,b:");
	scanf("%d%d",&a,&b);
	if(b>a)
	{	t=a;
		a=b;
		b=t;
	}
	for(i=b;i>=2;i--)
		if((a%i==0)&&(b%i==0))
		{	gy=i;
			break;
		}
	
 	/*a1=a;
	b1=b;
	y=a%b;
	while(y!=0)
	{
		if(b>y)	
		{	a=b;
			b=y;
			y=a%b;
		}
		else
		{
			a=y;
			y=a%b;
		}	
	}
	gy=b;
	g=a1*b1/gy;
	*/
         
	g=a*b/gy;
	printf("gy=%d\tg=%d\t",gy,g);
	
}