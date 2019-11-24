#include<stdio.h>
#include<string.h>
struct stu
{
     int num;
     char name[20];
     struct stu *next;
};
void main()
{
	struct stu s1,s2,s3;
	struct stu *head,*p ;
	p=head=&s1;
	s1.next=&s2;
	s2.next=&s3;
	s1.num=10101; 
	strcpy(s1.name,"sun");
	s2.num=10103;
	strcpy(s2.name,"star");
	s3.num=10107; 
	strcpy(s3.name,"moon");
	s3.next=NULL;
	while(p!=NULL)
	   { printf("num=%-5d  name=%-5s\n",p->num,p->name);
	     p=p->next;
	   }
}
