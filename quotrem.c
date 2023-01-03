//print quotient and remainder of two number//
#include<stdio.h>
int main ()
{
	int m,n;
	float quotient,remainder;
	printf("ENTER TWO NUMBER=");
	scanf("%d%d",&m,&n);
	quotient = m/n;
	remainder = m%n;
	printf("quotient of two number is =%f",quotient);
	printf("remainder of two number is =%f",remainder);
	return 0 ;
}