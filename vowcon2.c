#include<stdio.h>
#include<string.h>
int main()
{
	char s[40];
	int a=0,v=0,c=0;
	puts("ENTER ANY STRING=");
	gets(s);
	while(s[a] !='\0')
	{
		if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u'||s[a]=='A'||s[a]=='E'||s[a]=='I'||s[a]=='O'||s[a]=='U')
			v++;
		else
			c++;
		a++;
	}
	printf("\nTOTAL NUMBER OF VOWELS=%d",v);
	printf("\nTOTAL NUMBER OF CONSTANS=%d",c);
	return 0 ;
}