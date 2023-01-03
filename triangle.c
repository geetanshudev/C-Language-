//construct triangle//
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("ENTER NUMBER OF ROW OF TRIANGLE=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("$");
	        }
		printf("\n");
	}
	printf("\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf("$");
	        }
		printf("\n");
	}
	return 0;
}
	