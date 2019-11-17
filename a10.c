#include<stdio.h>
int max(int ,int );
int min(int ,int );
int main()
{
	int (*p)(int ,int);
	int i,a,b,c;
	printf("please input two int :");
	scanf("%d %d",&a,&b);
	printf("please input 2 or 1:");
	scanf("%d",&i);
	if(i==1)
	  { p=max;
	    printf("the max =%d",(*p)(a,b));
	  }
	else
	  { p=min;
	     printf("the min=%d",(*p)(a,b));
	  }
}
int max(int x,int y)
{
	return x>y?x:y;
}
int min(int x,int y)
{
	return x>y?y:x;
}