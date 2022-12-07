//compute factorial by iteration //
#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("enter any number=");	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("answer=%d",fact);
	}
	
	
	return 0;
}