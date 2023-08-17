//reverse string without using string header file //
#include<stdio.h>
int main()
{
	char a[30],*pt;
	int i,n=0;
	printf("enter any string=");
	gets(a);
	pt=a;
	while(*pt!='\0')
	{
		n++;
		pt++;
	
	}
	printf("string in reverse =");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0 ;
}
