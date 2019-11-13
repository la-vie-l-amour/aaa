#include<stdio.h>
void  exchange(int a[],int n);
int main()
{
	int i,*p;
	int b[]={1,2,3,4,5,6,7,8};
	exchange(b,8);
	p=b;
	for(i=0;i<8;i++)
	  printf("b[%d]=%d\n",i,*p++);	
}
void  exchange(int a[],int n)
{
	int t,i;
	for(i=0;i<=(n-1)/2;i++)
	    {
		t=a[i];
		a[i]=a[n-i-1];
		a[n-1-i]=t;
	     }
}