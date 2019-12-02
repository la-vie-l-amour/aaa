#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[20];
	int num;
	int age;
	char add[20];
}s[7];
void main()
{
	FILE *fp;
	int i;
	fp=fopen("d.dat","wb");
	if(fp==NULL)
	{
		printf("file open error");
		exit(0);
	}
	for(i=0;i<7;i++)
	{    scanf("%s %d %d %s",s[i].name,&s[i].num,&s[i].age,s[i].add);
	      if(fwrite(&s[i],sizeof(struct Stu),1,fp)!=1)
		printf("file write error");
	}
	fclose(fp);
}
	