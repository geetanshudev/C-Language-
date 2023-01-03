//construct pascal triangle//
#include<stdio.h>
int main ()
{
	int i,j,s,coef,r;
	printf("enter number of row=");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(s=1;s<=r-i;s++)
		{
			printf("  ");
		}
	
	
		for(j=0;j<=i;j++)
		{
			if(j==0||i==0)
			{
				coef=1;
			}

			else
			{	
				coef=coef*(i-j+1)/j;
			}
			printf("%d",coef);
		}
		printf("\n");
	}
		
	
	printf("\n\n");
	
	
	return 0 ;
}