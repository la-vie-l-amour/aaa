#include<stdio.h>
void swap(int *p1,int *p2,int *p3);
void main()
{
	int a,b,c;
	printf("请输出三个整数：");
	scanf("%d,%d,%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("%5d%5d%5d",a,b,c);
}
void swap(int *p1,int *p2,int *p3)
{
	void exchange(int *p3,int *p4);
	if(*p1<*p2)
	  exchange(p1,p2);
	if(*p2<*p3)
	  exchange(p2,p3);
	if(*p1<*p3)
	  exchange(p1,p3);	
	
}
void exchange(int *p3,int *p4)
{
	int t;
	t=*p3;
	*p3=*p4;
	*p4=t;
}