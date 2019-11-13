#include<stdio.h>
#include<string.h>
void swap(char b[],int n);
void main()
{
	char a[80];
	int k;
	printf("please input a string:");
	gets(a);
	k=strlen(a);
	swap(a,k);
	printf("%s",a);
}
void swap(char b[],int n)
{
	int i,t;
	
	for(i=0;i<=(n-1)/2;i++)
	    {
		t=b[i];
		b[i]=b[n-i-1];
		b[n-1-i]=t;
	     }

}