#include<stdio.h>
#include<string.h>
void main()
{
	struct Person
	{  char name[20];
	    int count;
	}leader[3]={"star",0,"moon",0,"sun",0};

	int i,j;
	char lead_name[10];
	for(i=0;i<10;i++)
	{  scanf("%s",lead_name);
	   for(j=0;j<3;j++)
	            if(strcmp(lead_name,leader[j].name)==0)
		leader[j].count++;
	}
	printf("result\n");
	for(j=0;j<3;j++)
	     printf("name:%s   count:%d\n",leader[j].name,leader[j].count);
}