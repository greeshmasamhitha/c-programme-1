#include<stdio.h>
#include<stdlib.h>
void main()
{
	int numb[6]={122,16,17,18,19,10};
	system("clear");
	numb[3]=111;
	numb[0]=222;
	for (int b=0;b<=6;b++)
		printf("%d", numb[b]);
}

