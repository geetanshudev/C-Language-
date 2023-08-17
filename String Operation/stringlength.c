//program based on counting length of string without using string function//
#include<stdio.h>
int main()
{
	char str[20],*pt;
	int i=0;
	printf("ENTER ANY STRING=");
	gets(str);
	pt=str;
	while(*pt !='\0')
	{
		i++;
		pt++;
	}
	printf("LENGTH OF STRING IS=%d",i);
	return 0;
}
	