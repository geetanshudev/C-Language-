//counting vowels & constants in a strings by switch case//
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int j,len,vow,con;
	puts("ENTER ANY STRINGS=");
	gets(str);
	len=strlen(str);
	vow=0;
	con=0;
	for(j=0;j<len;j++)
	{
		if((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z'))
		{
			switch(str[j])
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					vow++;
					break;
				default:
					con++;
			}
		}
	}
	printf("\n total number of vowels are=%d",vow);
	printf("\n total number of constant are=%d",con);
	return 0 ;
}
	
				