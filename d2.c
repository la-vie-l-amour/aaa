#include<stdio.h>
int main()
{
	void daozhi(int(*p)[3],int n);
	int a[3][3],i,j;
	printf("please enter 3x3 int data\n");
	for(i=0;i<3;i++)
	  for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	daozhi(a,3);
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)
		printf("%3d",a[i][j]);
	   printf("\n");
	}

}
void daozhi(int(*p)[3],int n)
{
	int i,j,t;
	for(i=0;i<3;i++)
	  for(j=i;j<3;j++)
	  {  t=p[j][i];
	     p[j][i]=p[i][j];
	     p[i][j]=t;
	   }
}