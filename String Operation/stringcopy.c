//copy string from source to destination without using string.h//
#include<stdio.h>
int main()
{
	char source[30],destin[30],i ;
	printf("enter any string=");
	gets(source);
	printf("\nstring in source =%s",source);
	for (i=0; source[i]!='\0'; ++i)
	{
		destin[i]=source[i];
	}
	
	printf("\nstring in destination=%s",destin);
	return 0;
}