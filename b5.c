#include<stdio.h>
void main()
{
	struct stu
	{  int num;
	   char name[20];
	   char sex;
	   int age;
	};
	int i;
	struct stu s[3]={{11,"sun",'M',18},{12,"moon",'F',19},{13,"star",'M',18}};
	/*struct stu *p[3];
	for(i=0;i<3;i++)
	{ p[i]=&s[i];
	  printf("num=%-5d   name=%-5s  sex=%-c  age=%d\n",p[i]->num,p[i]->name,p[i]->sex,p[i]->age);
	}*/
	struct stu *p;
	for(p=s;p<s+3;p++)
	     printf("num=%-5d   name=%-5s  sex=%-c  age=%d\n",p->num,p->name,p->sex,p->age);
	
	
}
