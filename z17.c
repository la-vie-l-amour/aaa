#include<stdio.h>
int main()
{
	char i,j,k;
	for(i='x';i<='z';i++)
	   for(j='x';j<='z'&&j!='i';j++)
		for(k='x';k<='z'&&k!='i'&&k!='j';k++)
		{	i!='x';
			k!='x';
			k!='z';
		}

	printf("a--%d b--%d c--%d",i,j,k);
}