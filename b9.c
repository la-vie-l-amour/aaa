#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filename[10];
	printf("please enter the filename");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	printf("请输入一个准备存入到磁盘的字符串（以#结束）:");
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;

	
}