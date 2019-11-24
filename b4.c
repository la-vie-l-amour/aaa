#include<stdio.h>
void main()
{
	struct stu
	{ int xh;
	   char name[20];
	   int grade;	  
	};
	int i,j;
	struct stu t;
	struct stu s[4]={011,"star",66,012,"sun",55,013,"moon",89,014,"sky",99};
	for(i=0;i<3;i++)
	     for(j=i+1;j<4;j++)
		if(s[i].grade<s[j].grade)
		 {     t=s[i];
		       s[i]=s[j];
		       s[j]=t;
		}
	for(i=0;i<4;i++)
	  printf("NO.=%-5d    name=%-5s    grade=%d\n",s[i].xh,s[i].name,s[i].grade);
	
}