//using bitwise to find odd even//
#include<stdio.h>
int main()
{
	int n;
	printf("ENTER ANY NUMBER=");
	scanf("%d",&n);
	((n&1)&&printf("ODD NUMBER"))||printf("EVEN NUMBER");
	return 0;
}