#include<stdio.h>
int main()
{
	int a[][3]={1,2,3,4,5,6,7,8,9};
	int i,j,t;
	for(i=0;i<3;i++)
	  {for(j=0;j<3;j++)
	    printf("%5d",a[i][j]);
	   printf("\n");
	   }
	printf("\n");
	for(i=0;i<3;i++)
	   for(j=i;j<3;j++)
	       {t=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=t;
		}
        for(i=0;i<3;i++)
	  {for(j=0;j<3;j++)
	    printf("%5d",a[i][j]);
	   printf("\n");
	   }
}