#include<stdio.h>
#include<stdio.h>
void main()
{
	int year;
         system("clear");
	printf("\n enter the year");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("\n this is leap year,%d",year);
	}
	if(year%100==0)
	{
			printf("\n this is leap year,%d",year);
}
if(year%4==0)
{
	printf("\n this is leap year,%d",year);
}
else
{
	printf("\n this is not leap year,%d",year);
}
}


