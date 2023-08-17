// to make insertion sort with c language //
#include<stdio.h>
int main()
{
	int i,j,n,k,temp,arr[50];
	printf("enter number of data==");
	scanf("%d",&n);
	printf("enter data =\n");
	
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
	
	printf("sorted list==\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",arr[k]);
	}
}
