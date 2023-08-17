//print reverse string using strrev() function//
#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	printf("enter any string=");
	gets(s);
	printf("reverse of the entered word =%s",strrev(s));
	return 0 ;
}
