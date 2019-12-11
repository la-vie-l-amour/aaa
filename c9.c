#include<stdio.h>
int main()
{
	
	void exchange(int *q1,int *q2,int *q3);
	void swarp(int *p1,int *p2);
	int a,b,c;
	int *t1,*t2,*t3;
	printf("please enter a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	
	t1=&a;
	t2=&b;
	t3=&c;
	if(a<b)
	{ swarp(t1,t2);
	  if(b<c)
	  {  swarp(t2,t3);
	     if(a<b)
		swarp(t1,t2);
	   }
	}
	else
	{    if(b<c)
	     {	swarp(t2,t3);
		if(a<b)
		  swarp(t1,t2);
	      }
	}
	//exchange(t1,t2,t3); 
	printf("%d %d %d",*t1,*t2,*t3);

	
}
void exchange(int *q1,int *q2,int *q3)
{
	void swarp(int *p1,int *p2);
	if(*q1<*q2) swarp(q1,q2);
	
	if(*q1<*q3) swarp(q1,q3);	
	if(*q2<*q3) swarp(q2,q3);
}

void swarp(int *p1,int *p2)
{
	int p;
	
	p=*p1;
	*p1=*p2;
	*p2=p;
	
	
}