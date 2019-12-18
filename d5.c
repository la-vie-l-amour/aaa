#include<stdio.h>
int main()
#define N 3
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
	for(i=0;i<n-1;i++)
		for(j=0;p[i][j]!='\0';j++)
	 	  if(p[i][j]>p[i+1][j])
			
}