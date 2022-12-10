//malloc programming which stores power of n from 0 upto m//
//date==9-12-2022//
//compiler==devC++//
//author==geetanshu dev//
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *pow,i,n,m;
	printf("Enter the integer=");
	scanf("%d",&n);
	printf("Enter integer's power=");
	scanf("%d",&m);
	pow=(int*)malloc((m+1)*sizeof(int));
	pow[0]=1;
	for(i=1;i<=m;i++)
		pow[i]=pow[i-1]*n;
	for(i=0;i<=m;i++)
		printf("%d\t%d\n",i,pow[i]);

}
