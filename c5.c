#include<stdio.h>
struct Date
{
	int year;
	int month;
	int day;
}d;
int main()
{
	int n;
	printf("please enter year month day:\n");
	scanf("%d %d %d",&d.year,&d.month,&d.day);
	switch(d.month)
		{
		case 1: n=d.day; break;
		case 2: n=31+d.day; break;
		case 3: n=31+29+d.day; break;
		case 4: n=31*2+29+d.day; break;
		case 5: n=31*2+29+30+d.day; break;
		case 6: n=31*3+29+30+d.day; break;
		case 7: n=31*3+29+30*2+d.day; break;
		case 8: n=31*4+29+30*2+d.day; break;
		case 9: n=31*5+29+30*2+d.day; break;
		case 10: n=31*5+29+30*3+d.day; break;
		case 11: n=31*6+29+30*3+d.day; break;
		case 12: n=31*6+29+30*4+d.day; break; 
		}
	if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
		printf("the year is a leap year\n");
	else 
		{
		if(d.month>=3) 
			n=n-1;
		printf("the year is not a leap year\n");
		}
	printf("year=%d month=%d day=%d n=%d",d.year,d.month,d.day,n);
}