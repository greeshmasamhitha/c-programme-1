#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[50],size,i;
	system("clear");
	printf("\n enter how many numbers you want: ");
	scanf("%d",&size);
	printf("\n enter %d elements: ",size);
	for(i=0;i<=size;i++)
	{
	
		scanf("%d",&arr[i]);
	}
		printf("\n numbers of this onedimentional array is");
	       for(i=0;i<size;i++)
	       {
	printf("%d",arr[i]);
	       }
	}
	

