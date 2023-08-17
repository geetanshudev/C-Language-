//copy string from source to destination by using string header//
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("ENTER ANY STRING=");
	gets(s1);
	strcpy(s2,s1);
	puts(s2);
	return 0;
}