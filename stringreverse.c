//reverse string without using string header file //
//date==9-12-22//
//compiler==DevC++//
#include<stdio.h>
int main()
{
	char a[30];
	int i=0,n=0;
	printf("enter any string=");
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
