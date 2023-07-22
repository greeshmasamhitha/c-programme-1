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
        strcat(string1,string2);
        printf("\n THe output after concationation is %s \n\n\n",string1);
}

