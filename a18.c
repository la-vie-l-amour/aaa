#include<stdio.h>
void scan(int n,int *p1);
void zt(int n,int *q);
void print(int n,int *p2);

int main()
{
	int a[10];
	int *p;
	p=a;
	scan(10,p);
	zt(10,p);
	print(10,p);

	
	

}
void scan(int n,int *p1)
{
	int j;
	printf("please enter n int:\n");
	for(j=0;j<n;j++)
	   scanf("%d",p1+j);
}
void zt(int n,int *q)
{
	int min=0,max=n-1;
	int j,t,m;
	for(j=0;j<n-1;j++)
	{if(q[j]<q[min])	     
		min=j;
	  
	}
	 for(j=0;j<n-1;j++)     

	 { if(q[j]>q[max])
	        max=j;
	 
	}
	   t=q[min];
	   q[min]=q[0];
	   q[0]=t;
	   m=q[max];
	   q[max]=q[n-1];
	   q[n-1]=m;
	
}
void print(int n,int *p2)
{
	int j;
	for(j=0;j<n;j++)
	   printf("%3d",p2[j]);
}