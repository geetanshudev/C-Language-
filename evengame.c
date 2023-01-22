//small game based on odd even//
//if multiplication of two number is odd then you win otherwise you loose//
#include<stdio.h>
int main()
{
	int a,b,c;
	int ans;
	int ans1;
	printf("Do you want to play (yes=1/no=0)? =>");
	scanf("%d" ,&ans);
	while(ans == 1)
	{
		printf("\n");
		printf("Do you want to continue (yes=1/no=0)? =>");
		scanf("%d",&ans1);
		if(ans1==1)
		{
			printf("enter first number = ");
			scanf("%d",&a);
			printf("enter second number = ");
			scanf("%d",&b);
			c = a*b;
			if(c%2==0)
			{
				printf("YOU LOOSE");
				
			}
			else{
				printf("YOU WIN ");
			}
			
		}
		else
		{
			printf("have a nice day");
			break;
		}
	}
	return 0 ;
}
	
