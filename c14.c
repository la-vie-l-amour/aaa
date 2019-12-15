#include<stdio.h>
int main()
{
	int count(char *P);
	int num;
	char s[50];
	printf("please enter a string\n");
	scanf("%s",s);
	num=count(s);
	printf("num=%d",num);
	return 0;
}
int count(char *p)
{
	int s=0;
	for(;*p!='\0';p++)
		s++;
	return s;	
}
