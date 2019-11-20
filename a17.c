#include<stdio.h>
#include<string.h>
void cp(char *q1,char *q2);
int main()
{
	char a,b,c;
	char *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("please enter three strings\n");
	scanf("%s\n%s\n%s\n",p1,p2,p3);
	cp(p1,p2);
	cp(p2,p3);
	cp(p1,p2);
	printf("%s\n%s\n%s\n",p1,p2,p3);
	   
}
void cp(char *q1,char *q2)
{
	char *t;
	char a[]="clll";
	t=a;
	if(strcmp(q1,q2)>0)
	  {
		t=q1;
		q1=q2;
		q2=t;
	   }
}