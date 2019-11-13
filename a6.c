#include<stdio.h>
#include<string.h>
char cs(char c[],char d[],char str[]);
int main()
{
	char a[20],b[20],str2[80];
	printf("please input a string:");
	gets(a);
	printf("please input a string:");
	gets(b);
        cs(a,b,str2);
	printf("%s",str2);
	
	
}
void cs(char c[],char d[],char str[])
{
	int i,j;
	
	for(i=0;c[i]!='\0';i++)
	   str[i]=c[i];
	for(j=0;d[j]!='\0';j++)
	    str[i+j]=d[j];
	str[i+j]='\0';
	  	
}
