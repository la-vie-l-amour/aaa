#include<stdio.h>
#include<stdlib.h>
void print(struct Stu* d);
struct Stu
	{
		int num;
		char name[20];
		char sex;
		int age;
		struct Stu* next;
	
	};
int main()
{
	struct Stu *head,*p,*q,*m;
	int n=0,a;
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
	free()
	p->next=NULL;
	m=q=p=head;
	while(p->next!=NULL)
	   print(head);
	printf("please enter the age:");
	   scanf("%d",&a);
	
	if(head->age==a)
	  { head=p->next;
            print(head);
	  }
	else
	{ 
	   while(p->next!=NULL)		
	  { q=p->next;
	    m=q->next; 
	    if(q->age==a)
		m=p->next;
	    else p=m->next;
	   }
	   print(head);
	}
}
void print(struct Stu *d)
{
	struct Stu *p;
	p=d;
	while(p->next!=NULL)
	{printf("%d\t%s\t%c\t%d\t\n",p->num,p->name,p->sex,p->age);
	 p=p->next;
	}
}	
     
	
	
	
	
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             

