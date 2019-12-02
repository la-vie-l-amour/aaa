#include<stdio.h>
#include<string.h>
int main()
{
	
	int i,j,k,n=5;
	char* a[5]={"jvj","hgij","dkd","jbij","nkj"};
	char *t;
	for(i=0;i<n-1;i++)
	{    
	      k=i;
	      for(j=i+1;j<n;j++)
	      {	if(strcmp(a[k],a[j])>0)		
		   k=j;
	 	if(k!=i)
	      	 {	t=a[k];
			a[k]=a[i];
			a[i]=t;
	      	 }
	      }
	}
	for(i=0;i<n;i++)
	  printf("%s\n",a[i]);
}