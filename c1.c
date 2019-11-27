#include<stdio.h>
void main()
{
	struct
	{
		char name[20];
		int num;
		char sex;
		char job;
		union
		{
			int class;
			char pro[20];
		}d;
	}a[2];
	int i;
	for(i=0;i<2;i++)
	{ printf("please enter the date of person:\n");
	  scanf("%s %d %c %c",a[i].name,&a[i].num,&a[i].sex,&a[i].job);	
	  if(a[i].job=='s')
	     {   printf("please enter the student's class:");
		 scanf("%d",&a[i].d.class);
	      }
	  else
	    {	printf("please enter the teacher's position:");
		scanf("%s",a[i].d.pro);
	     }
	}
	printf("name	num	sex	job	class/position\n");
	for(i=0;i<2;i++)
	{
		 if(a[i].job=='s')
			 printf("%s\t%d\t%c\t%c\t%d\t\n",a[i].name,a[i].num,a[i].sex,a[i].job,a[i].d.class);	
		 else
			 printf("%s\t%d\t%c\t%c\t%s\t\n",a[i].name,a[i].num,a[i].sex,a[i].job,a[i].d.pro);
	}
}