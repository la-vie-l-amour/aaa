#include<stdio.h>
int main()
{
	int a[3][4]={{67,77,87,90},{88,89,80,98},{87,76,60,99}};
	int * search(int (*p1)[4],int j);
	int n,i;
	int *p;
	printf("please enter the number of student:");
	scanf("%d",&n);
	p=search(a,n);
	printf("the scores of No.%d are:\n",n);
	for(i=0;i<4;i++)
	  printf("%4d",p[i]);
}
int * search(int (*p1)[4],int j)
{
	int *p2;
	p2=*(p1+j);
	return p2;
}