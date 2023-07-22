
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
        char string1[50],string2[50];
        system("clear");
        printf("\n enter any one string :");
        scanf("%s",string1);
      	printf("\n enter any second string :");
        scanf("%s",string2);
	if(strcmp(string1,string2)==0)
	{
		printf("\n Given strings are equal %s\n\n\n",string1,string2);
	}
	else
	{
	   printf("\n Given strings are not equal %s\n\n\n",string1,string2);
	}
}	

