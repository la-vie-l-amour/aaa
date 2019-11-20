#include<stdio.h>
#include<string.h>
int main()
{
	char **p;
	int i,j;
	char *t;
	
	char * a[5];
	
	for(i=0;i<5;i++)
	  scanf("%s\n",a[i]);
	p=a;
	for(i=0;i<5;i++)
	 { for(j=i+1;j<5;j++)
	   {  if(strcmp(p[j],p[i]))>0
	     {	t=p[i];
	        p[i]=p[j];
		p[j]=t;		
	      }
	    }
	  }  
	for(i=0;i<5;i++)
	  printf("%s\n",p[i]);

}
