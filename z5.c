#include<stdio.h>
int main()
{
	int i,s=0,a,n,k,m=0;
	printf("please input a,n");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
		k=2+m;
		s=s+k;
		m=k*10;
	}	
	printf("s=%d",s);
}