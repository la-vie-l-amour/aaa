#include<stdio.h>
#include<stdlib.h>
int main()
{
	void check(int *p);
	int i;
	int *p1;
	p1=(int*)malloc(5*sizeof(int));
	printf("please enter five students' grades\n");
	for(i=0;i<5;i++)
	       scanf("%d",p1+i);
	for(i=0;i<5;i++)
	       check(p1+i);
	return 0;
}
void check(int *p)
{
	if(*p<60)
	   printf("%5d",*p);

}