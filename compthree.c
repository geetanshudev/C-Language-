//compare three number by ternary operator//
//author===geetanshu dev//
//date==17-05-2022//
#include<stdio.h>
int main()
{
	int a,b,c,g;
	printf("ENTER ANY THREE NUMBER=");
	scanf("%d%d%d",&a,&b,&c);
	g=(a>b?(a>c?a:c):(b>c?b:c));
	printf("LARGEST NUMBER IS=%d",g);
	return 0;
}
