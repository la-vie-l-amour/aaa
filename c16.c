#include<stdio.h>
#include<string.h>
int main()
{	
	char * copy(char *p,int m);
	char a[20]="youarealier";
	char *p1;
	int m,n;
	printf("please enter m\n");
	scanf("%d",&m);
	n=strlen(a);
	if(m>n)
		printf("m is so long");
	else
		p1=copy(a,m);
	printf("%s",p1);

}
char * copy(char *p,int m)
{
	char *p2;
	int i;
	for(i=0;i<m;i++)
		p++;
	p2=p;
	return p2;
}