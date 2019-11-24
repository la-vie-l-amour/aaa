#include<stdio.h>
int main()
{
	struct stu
	{    long int xh;
	     char name[20];
	     int grade;	    
	} ;	
	struct stu s1,s2;
	printf("please enter s1 information\n");
	printf("NO.=");
	scanf("%d",&s1.xh);
	printf("name=");
	scanf("%s",s1.name);
	printf("grade=");
	scanf("%d",&s1.grade);
	printf("please enter s2 information\n");
	printf("NO.=");
	scanf("%d",&s2.xh);
	printf("name=");
	scanf("%s",s2.name);
	printf("grade=");
	scanf("%d",&s2.grade);
	if(s1.grade>s2.grade)
	    printf("NO.=%d\nname=%s\ngrade=%d\n",s1.xh,s1.name,s1.grade);
	else if(s1.grade<s2.grade)
	           printf("NO.=%d\nname=%s\ngrade=%d\n",s2.xh,s2.name,s2.grade);
	        else
		 printf("NO.=%d\nname=%s\ngrade=%d\n",s1.xh,s1.name,s1.grade);
		 printf("NO.=%d\nname=%s\ngrade=%d\n",s2.xh,s2.name,s2.grade);
	return 0;
}