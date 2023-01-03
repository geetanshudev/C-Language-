//swap two number only using two variables//
#include<stdio.h>
void swap(int*,int*);
int main()
{
 	int a,b;
	printf("enter two number=");
	scanf("%d%d",&a,&b);
	printf("before swapping=%d %d",a,b);
	
	swap(&a,&b);
	printf("\nafter swapping=%d %d",a,b);
	return 0;
}
void swap(int*p,int*q)
{
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
} 