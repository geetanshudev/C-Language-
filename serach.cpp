//check substring in string or not //
#include<stdio.h>
int main()
{
	char str[80],search[10];
	int count1 = 0,count2 = 0 , i, j,flag;
	
	printf("enter any string=\n");
	gets(str);
	printf("enter search substring=\n");
	gets(search);
	while (str[count1] !='\0')
		count1++;
	while (search[count2] !='\0')
		count2++;
	for(i=0;i<=count1-count2;i++)
	{
		for(j=i;j<i+count2;j++)
		{
			flag = 1;
			if(str[j]!=search[j-i])
			{
				flag = 0;
				break;
			}
		}
		if(flag ==1)
			break;
	}
	if(flag==1)
		printf("search successfull!!!!!");
	else
		printf("search unsuccessful !!!!");
	
	return 0 ;
}
