//concatinate 2 strings by strcat//
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	puts("enter first string=");
	gets(s1);
	puts("enter second string=");
	gets(s2);
	strcat(s1,s2);
	printf("concatinated string=%s",s1);
	return 0;
}