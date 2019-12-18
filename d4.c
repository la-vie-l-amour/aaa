#include<stdio.h>
#include<string.h>
#define N 3
int main()
{
	void paix(char (*p)[20],int n);
	char a[N][20];
	int i;
	printf("please enter 3 dengchang strings\n");
	for(i=0;i<N;i++)
		scanf("%s",a[i]);
	printf("\n");
	paix(a,N);
	for(i=0;i<N;i++)
		printf("%s\n",a[i]);
}
void paix(char (*p)[20],int n)
{
	int i,j;
	char t[20];
	for(i=0;i<=n-1;i++)
	  for(j=0;j<n-i-1;j++)
		if(strcmp(p[j],p[j+1])>0)
		{	strcpy(t,p[j]);
			strcpy(p[j],p[j+1]);
			strcpy(p[j+1],t);
		}
}