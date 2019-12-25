#include<stdio.h>
int main()
{
	char ch,n1,n2,n3,n4;
	ch=getchar();
	while(ch!='\n')
	{
		if(ch==' ')
			n1++;
		else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
			n2++;
		else if(ch>='0'&&ch<='9')
			n3++;
		else n4++;
		ch=getchar();
		
		
			
	}
	
	printf("kg=%d\tzifu=%d\tshuzi=%d\tqt=%d",n1,n2,n3,n4);
}