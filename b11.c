#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	char file1[20],file2[20];
	printf("please enter read file:");
	scanf("%s",file1);
	printf("pease enter write file:");
	scanf("%s",file2);
	fp1=fopen(file1,"r");
	fp2=fopen(file2,"w");
	if(fp1==NULL)
	{	printf("read file open error");
		exit(0);
	}
	if(fp2==NULL)
	{	printf("write file open error");
		exit(0);
	}
	ch=fgetc(fp1);
	while(ch!=-1)
	{
		fputc(ch,fp2);
		putchar(ch);
		ch=fgetc(fp1);
	}
	putchar(10);
	fclose(fp1);
	fclose(fp2);
	
	
}