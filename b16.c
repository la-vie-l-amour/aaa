#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[20];
	int num;
	int age;
	char add[20];
}s[7];
int main()
{
	int i;
	FILE *ft;
	ft=fopen("d.dat","rb");
	if(ft==NULL)
	{
		printf("file open error");
		exit(0);
	}
	for(i=0;i<7;i+=2)
	{   
	     fseek(ft,i*sizeof(struct Stu),0);
	     fread(&s[i],sizeof(struct Stu),1,ft);
	    printf("%-5s%5d%5d%5s\n",s[i].name,s[i].num,s[i].age,s[i].add);
	}
	fclose(ft);
	
}
