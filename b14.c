#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*ft;	
	char ch;
	fp=fopen("b.dat","r");
	if(fp==NULL)
	{
		printf("file open error");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=-1)
	{	printf("%c",ch);
		ch=fgetc(fp);
	}
	rewind(fp);
	ft=fopen("d.dat","w");
	if(ft==NULL)
	{
		printf("file open error");
		exit(0);
	}
	ch=fgetc(fp);
	
	while(ch!=-1)
	{	
		fputc(ch,ft);
		ch=fgetc(fp);	
	}
	fclose(fp);
	fclose(ft);

	
	
}