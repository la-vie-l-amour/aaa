#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int s1,s2,s3,s4,s5,s0;
	printf("please enter a string\n");
	gets(s);
	s0=strlen(s);
	s1=kg(s);
	s2=sz(s);
	s3=dxzm(s);
	s4=xxzm(s);
	s5=s0-s1-s2-s3-s4;
	printf("kongge=%-3d shuzi=%-3d dxzm=%-3d xxzm=%-3d qtzf=%-3d",s1,s2,s3,s4,s5);
	
	
}
int kg(char *p)
{
	int i,s=0;
	for(i=0;p[i]!='\0';i++)
		if(p[i]==' ')
			s++;
	return s;
}
int sz(char *p)
{
	int s=0,i;
	for(i=0;p[i]!='\0';i++)
		if(p[i]>='0'&&p[i]<='9')
			s++;
	return s;
}
int dxzm(char *p)
{
	int s=0,i;
	for(i=0;p[i]!='\0';i++)
		if(p[i]>='A'&&p[i]<='Z')
			s++;
	return s;
}
int xxzm(char *p)
{
	int s=0,i;
	for(i=0;p[i]!='\0';i++)
		if(p[i]>='a'&&p[i]<='z')
			s++;
	return s;
}