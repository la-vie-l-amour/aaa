#include<stdio.h>
#include<string.h>
void print(char * name[],int n);
void sort(char *name[],int n);
int main()
{
	char * a[]={"follow me","basic","great wall","c lanuage","math"};
	int n=5;
	sort(a,n);
	print(a,n);
}
void sort(char *name[],int n)
{
	int i,j,k;
	char *t;
	t=NULL;

	for(i=0;i<n-1;i++)
	{ k=i;
	  for(j=i+1;j<n;j++)
	        if( strcmp(name[k],name[j])>0)
	            k=j;
	  if(k!=i)
	   {
	    t=name[i];
	    name[i]=name[k];
	    name[k]=t;
	    }
	}
	
	     


}
void print(char * name[],int n)
{
	int i=0;
	char *p;
	p=name[0];
	while(i<n)
	{
	    p=*(name+i++);
	     printf("%s\n",p);
	}
}