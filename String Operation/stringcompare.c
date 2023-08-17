//compare two string without using string header//
#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i=0 ;
	printf("enter first string =");
	gets(s1);
	printf("enter second string=");
	gets(s2);
	while(s1[i]==s2[i] && s1[i] !='\0')
	i++;
	if(s1[i]==s2[i])
		printf("two string  are equal ");
	else
		printf("two string are not equal");
	return 0;
} 