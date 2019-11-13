#include<stdio.h>
void mp(char s[],int n);
int main()
{
	char a[10];
	int i;
	for(i=0;i<10;i++)
	  scanf("%c",&a[i]);
	mp(a,10);
	for(i=0;i<10;i++)
	  printf("%c",a[i]);
	
}
void mp(char s[],int n)
{
	int i,j;
	char t;
	for(i=0;i<n-1;i++)
	  for(j=0;j<n-i-1;j++)
 	     if(s[j]>s[j+1])
	       {
	      	    t=s[j];
	   	    s[j]=s[j+1];
		    s[j+1]=t;
		}
}