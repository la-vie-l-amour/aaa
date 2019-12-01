#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	int num;
	char name[20];
	char sex;		
}s[3],s1[3];
void scan()
{
	FILE *fp;
	int i;
	fp=fopen("a.dat","wb");
	if(fp==NULL)
	{  
	   printf("the file do not open");
	   exit(0);
	}
	printf("please input the students' information:\n");
	for(i=0;i<3;i++)
	 {   scanf("%d %s %c",&s[i].num,s[i].name,&s[i].sex);
	      if(fwrite(&s[i],sizeof(struct Stu),1,fp)!=1)
		printf("file write error");
	}
	fclose(fp);
	    	
} 
void print()
{
	FILE *fp;
	int i;
	fp=fopen("a.dat","rb");
	if(fp==NULL)
	{  
		 printf("the file do not open");
		 exit(0);
	}
	for(i=0;i<3;i++)
	{
		if(fread(&s1[i],sizeof(struct Stu),1,fp)!=1)
			printf("file read error!");
		printf("num=%-5d  name=%-5s  sex=%c\n",s1[i].num,s1[i].name,s1[i].sex);
		
	}
}
void main()
{
	scan();
	print();
}




	