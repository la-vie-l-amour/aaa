#include<stdio.h>
int max(int x,int y);
int min(int x,int y);
int sum(int x,int y);
void fun(int x,int y,int(*p)(int ,int));
int main()
{
	int a=88,b=34;
	int n;
	printf("please input 1,2 or3: ");
	scanf("%d",&n);
	if(n==1)
	  fun(a,b,max);
	else
	  {if(n==2)
	     fun(a,b,min);
	    else
	      fun(a,b,sum);
	   }
}
void fun(int x,int y,int(*p)(int ,int))
{
	printf("%d", (*p)(x,y));
}
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x>y?y:x;
}
int sum(int x,int y)
{
	int z;
	z=x+y;
	return z;
}