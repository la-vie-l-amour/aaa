#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char a[3][10],temp[10];
	int i,j,k;
	printf("please enter strings:\n");
	for(i=0;i<3;i++)
	   scanf("%s",a[i]);
	for(i=0;i<2;i++)
	{    k=i;
	     for(j=i+1;j<3;j++)
		if(strcmp(a[k],a[j])>0)
	     		k=j;
	     if(k!=i)
	     {
		strcpy(temp,a[i]);
		strcpy(a[i],a[k]);
		strcpy(a[k],temp);
	      }
	}

	fp=fopen("a.dat","w");
	if(fp==NULL)
	{
		printf("file open error");
		exit(0);
	}
	
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{  fputs(a[i],fp);
	   fputs("\n",fp);
	  printf("%s\n",a[i]);
	}
}