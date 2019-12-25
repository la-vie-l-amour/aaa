#include<stdio.h>
int main()
{
	char ch;
	ch=getchar();
	while(ch!='\n')
	{	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		{	if(ch>='W'&&ch<='Z'||ch>='w'&&ch<='z')
				ch=ch-22;
			else   ch=ch+4;
		}
		printf("%c",ch);
		ch=getchar();
	}
	printf("\n");
	return 0;
}