#include<stdio.h>
#include<string.h>
int main()
{
	void copy(char *p1,char *p2,int m1);
	char a[20]="dinghaiyin",b[20];
	int n,m;
	printf("please enter m\n");
	scanf("%d",&m);
	n=strlen(a);
	if(m>n)
		printf("m is so long");
	else
		copy(a,b,m);
	printf("a=%s\tb=%s\t",a,b);
	
}
void copy(char *p1,char *p2,int m1)
{
	int i=1;
	while(i<m1)
	{	p1++;
	 	i++;
	}
	//for(i=0;*(p1+i)!='\0';i++)
	//	*(p2+i)=*(p1+i);
	//*(p2+i)='\0';
	while(*p1!='\0')
	{	*p2=*p1;
		p1++;
		p2++;
	}
	*p2='\0';	    
}
