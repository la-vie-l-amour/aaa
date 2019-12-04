#include<stdio.h>
struct Stu
{
	int num;
	char name[20];
	int score[3];
}s[5];
void input(struct Stu* p,int n)
{
	int i;
	for(i=0;i<n;i++,p++)
	  scanf("%d %s %d %d %d",&p->num,p->name,&p->score[0],&p->score[1],&p->score[2]);
}
void print(struct Stu *p,int n)
{
	int i;
	
	printf("num\tname\tscoer1\tscore2\tscore3\t\n");
	for(i=0;i<5;i++,p++)
	    printf("%d\t%s\t%d\t%d\t%d\t\n",p->num,p->name,p->score[0],p->score[1],p->score[2]);
}
void main()
{
	input(s,5);
	print(s,5);
}