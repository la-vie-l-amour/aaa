#include<stdio.h>
void max(int *q1,int *q2);
int main()
{
	int a,b,c;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("please enter a,b,c:");
	scanf("%d,%d,%d",p1,p2,p3);
	max(p1,p2);
	max(p2,p3);
	max(p1,p3);
	printf("%3d%3d%3d",a,b,c);
	

}

void max(int *q1,int *q2)
{
	int t;
	
	
	if(*q1>*q2)
	{
	   t=*q1;
	   *q1=*q2;
	   *q2=t;
	}
}