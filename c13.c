#include<stdio.h>
int main()
{
	void search(int (*q)[4],int k);
	int a[3][4]={{57,78,98,90},{58,97,76,87},{90,78,69,79}};
	int i,j,n,s;
	int (*p)[4];
	p=a;
	for(i=0;i<3;i++)
	{  s=0;
	   for(j=0;j<4;j++)
	       s=p[i][j]+s;
	   printf("%d\n",s/4);
	}
	
	printf("please enter n");
	scanf("%d",&n);
	for(i=0;i<4;i++)
	   printf("%3d",*(*(p+n)+i));
	printf("\n");
	search(p,3);
}	
void search(int (*q)[4],int k)
{
	int i,j,n;
	for(i=0;i<k;i++)
	{ n=0;
	  for(j=0;j<4;j++)
	    if(*(*(q+i)+j)<60)   
	        n=1;
	   if(n)
	   { for(j=0;j<4;j++)
	       printf("%3d",*(*(q+i)+j));
	     printf("\n");
	   }
	}
}
     