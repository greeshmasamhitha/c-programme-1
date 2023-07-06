#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num1,num2,temp;
	system("clear");
	printf("\n enter number 1");
	scanf("%d",&num1);
	printf("\n enter number 2");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\n is the number after swapping %d",num1);
	printf("\n is number after swapping %d",num2);
}

