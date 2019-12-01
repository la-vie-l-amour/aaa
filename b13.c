#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char a[3][10];
	int i=0;
	fp=fopen("a.dat","r");
	if(fp==NULL)
	{
		printf("the file can not open");
		exit(0);
	}
	while(fgets(a[i],10,fp)!=NULL)
	{
		printf("%s\n",a[i]);
		i++;
	}
	fclose(fp);
	return 0;
	
}