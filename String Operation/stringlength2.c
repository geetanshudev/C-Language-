//counting length of string by using string header file//
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("enter any string=");
	gets(s);
	puts(s);
	printf("length of string is=%d",strlen(s));
	return 0;
}