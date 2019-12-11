#include<stdio.h>
int main()
{
	int a[10];
	int *p,i;
	p=a;
	printf("please enter 10 int\n");
	for(i=0;i<10;i++)
	scanf("%d",p++);
	p=a;
	for(i=0;i<10;i++)
	printf("%5d",*(p+i));
}