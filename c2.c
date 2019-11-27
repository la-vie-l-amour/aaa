#include<stdio.h>
void main()
{
	enum color{red,yellow,blue,black,white};
	enum color a,b,c,pri;
	int n=0,loop;
	for(a=red;a<=white;a++)
	  for(b=red;b<=white;b++)
	    if(a!=b)
	  {   for(c=red;c<=white;c++)
		    { if((c!=a)&&(c!=b))
			{	 n++;
				 printf("%-5d",n);
				 for(loop=1;loop<4;loop++)
				 {  switch(loop)
					{	case 1:pri=a;break;
						case 2:pri=b;break;
						case 3:pri=c;break;
						default:break;
					}
				     switch(pri)
					{
						case red:printf("red\t");break;
						case yellow:printf("yellow\t");break;
						case blue:printf("blue\t");break;
						case black:printf("black\t");break;
						case white:printf("white\t");break;
						default:break;
					}
				 }
				printf("\n");
			}
		   }
	    }
	printf("%d",n);
}