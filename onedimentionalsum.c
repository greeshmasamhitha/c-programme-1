#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50],size,product,i,sum;
	system("clear");
printf("\n enter how many elements you want: ");
scanf("%d",&size);
for(i=0;i<=size;i++)
{
	printf("\n enter %d elements:",i);
	scanf("%d",&arr[i]);
}
sum=0;
product=1;
printf("\n the sum of one-dimentional array elments are ");
for(i=0;i<=size;i++)
{
	sum=sum+arr[i];
	product=product*arr[i];
}
printf("\n sum of arrays is : %d\n",sum);
printf("\n product of array is : %d\n",product);
}

