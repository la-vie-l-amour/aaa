#include<stdio.h>
#include<stdlib.h>
void print(struct Stu* d);
struct Stu* del(struct Stu*h,int age);
struct Stu * creat();
struct Stu
{
	int num;
	char name[20];
	char sex;
	int age;
	struct Stu* next;	
};
void main()
{
	int a;
	struct Stu *pt;
	pt=creat();
	print(pt);
	printf("please enter the age:");
	scanf("%d",&a);
	print(del(pt,a));

	
}
void print(struct Stu *d)
{
	struct Stu *p;
	p=d;
	while(p->next!=NULL)
	{
		printf("%d\t%s\t%c\t%d\t\n",p->num,p->name,p->sex,p->age);
		p=p->next;
	}
}
struct Stu* del(struct Stu *h,int age)
{
	struct Stu *p,*q;
	q=p=h;	
	if(h->age==age)
	   h=p->next;
	else
	{	p=p->next;
	    	while(p!=NULL)		
	  	{ 
	    		if(p->age==age)
	    		q->next=p->next;

	  		else
			{
		 		q=p;
		 		p=p->next;
			}
		}
		    
	}
	return(h);
	
}
struct Stu * creat()
{
	struct Stu *head,*p,*q;
	int n=0;
	p=(struct Stu *)malloc(sizeof(struct Stu));
	q=p;
	head=NULL;
	printf("please enter the date of student:\n");
	scanf("%d %s %c %d",&p->num,p->name,&p->sex,&p->age);
	while(p->num!=0)
	{
		n++;
		if(n==1)
			head=p;
		else 
			q->next=p;
		q=p;
		p=(struct Stu *)malloc(sizeof(struct Stu));
		printf("please enter the date of student:\n");
		scanf("%d %s %c %d",&p->num,p->name,&p->sex,&p->age);
		
	}
	free(p);
	q->next=NULL;
	return(head);
}