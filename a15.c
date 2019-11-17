#include<stdio.h>
int main()
{
	int i;
	int b[]={1,2,3,4};
	int * a[]={&b[0],&b[1],&b[2],&b[3]};
	int * *p;
	p=a;
	
	for(i=0;i<4;i++)
	  printf("%4d",**(p+i));
}