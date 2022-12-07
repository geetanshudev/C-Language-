//compute the factorial number by recursion//
#include<stdio.h>
int rect(int);
int main()
{
	int a , fact ;
	printf("ENTER ANY NUMBER=");
	scanf("%d",&a);
	fact = rect(a);
	printf("factorial value=%d",fact);
	return 0;
}
int rect(int x)
{
	int f;
	if(x==1)
		return(1);
	else
		f=x*rect(x-1);
	return (f) ;
}