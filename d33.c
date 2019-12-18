#include<stdio.h>
int main()
{
	void fun(int *p);
	int a[5][5];
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	fun(a[0]);
	printf("\n");
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void fun(int *p)
{
	int *pmin,*pmax,i,t;
	pmin=p;
	pmax=p;
	for(i=0;i<24;i++)
		if(*(p+i)>*(p+i+1))
			pmax=p+i;
	
	t=*(p+12);
	*(p+12)=*pmax;
	*pmax=t;
	 for(i=0;i<24;i++)
		if(*(p+i)<*(p+i+1))
			pmin=p+i;
	 t=*p;
	 *p=*pmin;
	 *pmin=t; 
	for(i=0;i<24;i++)
		if((*(p+i)<*(p+i+1))&&(*(p+i)!=*p))   
			pmin=p+i;    
	 t=*(p+4);
	 *(p+4)=*pmin;
	 *pmin=t;  
	for(i=0;i<24;i++)
		if((*(p+i)<*(p+i+1))&&(*(p+i)!=*p)&&(*(p+i)!=*(p+4)))   
			pmin=p+i;    
	 t=*(p+20);
	 *(p+20)=*pmin;
	 *pmin=t; 
	for(i=0;i<24;i++)
		if((*(p+i)<*(p+i+1))&&(*(p+i)!=*p)&&(*(p+i)!=*(p+4))&&(*(p+i)!=*(p+20)))   
			pmin=p+i;    
	 t=*(p+24);
	 *(p+24)=*pmin;
	 *pmin=t;                                                                                                                                                                           	  
}
