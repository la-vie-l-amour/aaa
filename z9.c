#include<stdio.h>
void main()
{
	int i,n,s=0;
	for(n=1;n<1000;n++)
	{	for(i=1;i<n;i++)
			if(n%i==0)
			     s=s+i;
		if(n==s)
		{	printf("%d its factors are",n);
		        for(i=1;i<n;i++)
				if(n%i==0)
					printf("%d ",i);\
			printf("\n");
		}
		s=0;
	}
}