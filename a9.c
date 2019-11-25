#include<stdio.h>
void copy_string(char *from,char *to);
int main()
{
	char *a="c lanuage";
	char *b="math";
	copy_string(b,a);
	printf("%s",a);
}
/*void copy_string(char *from,char *to)
{
	int i;
	for(i=0;from[i]!=0;i++)
	   to[i]=from[i];
	to[i]='\0';
	    
}*/
/*void copy_string(char *from,char *to)
{
	while((*to=*from)!='\0')
	{from++;
	 to++;
	}
}*/
/*void copy_string(char *from,char *to)
{
	//while((*to++=*from++)!='\0');
	//while(*to++=*from++);
	//for(;(*to++=*from++)!='\0';);
	for(;*to++=*from++;);
}*/
/*void copy_string(char *from,char *to)
{
	while((*from)!='\0')
	    *to++=*from++;
	*to='\0';	
}*/
void copy_string(char from[],char to[])
{
	char *p1,*p2;
	p1=from;
	p2=to;	
	while(*to++=*from++);
}
