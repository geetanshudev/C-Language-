//compare two string by string header//
#include<stdio.h>
#include<string.h>
int main()
{
	char string1[30],string2[30];
	puts("ENTER 1st STRING=");
	gets(string1);
	puts("ENTER 2nd STRING=");
	gets(string2);
	if(strcmp(string1,string2)==0)
		printf("these two strings are equal");
	else
		printf("these two strings are not equal");
	return 0;
}