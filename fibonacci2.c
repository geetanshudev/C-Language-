// compute fibonacci through recursion //
#include<stdio.h>
void fibo(int,int,int);
int main()
{
	int old=1,current=1,n;
	printf("enter size of series=");
	scanf("%d",&n);
	printf("%d\t\n%d\t\n",old,current);
	fibo(old,current,n);
	return 0;
}
void fibo(int old,int current,int term)
{
	int newterm;
	if (term >=1)
	{
		newterm=old+current;
		printf("%d\t\n",newterm);
		term=term-1;
		fibo(current,newterm,term);
	}
}