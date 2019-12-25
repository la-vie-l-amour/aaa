#include<stdio.h>
int main()
{
	int i,n,a,k=0,s=0;
	printf("please input a,n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{	
		k=k+a;
		s=s+k;
		a=a*10;
	}
	printf("s=%d",s);
}