//concatenate two strings  without using string.h//
#include<stdio.h>
int main()
{
	char string1[30], string2[30];
	int i=0, j=0 ;
	printf("enter first string=");
	scanf("%s",string1);
	printf("enter second string=");
	scanf("%s",string2);
	while(string1[i]!='\0')
	i++;
	while(string2[j]!='\0')
	{
		string1[i]=string2[j];
		j++;
		i++;
	}
	string1[i]='\0';
	printf("\nstring concatinated=%s",string1);
	return 0;
}