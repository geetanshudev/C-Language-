//to make selection sort for data structure using c //
#include<stdio.h>
int main()
{
	int i,j,k,n,min,t,arr[20];
	printf("enter number data in array =");
	scanf("%d",&n);
	printf("enter data inside array=\n");
	for(i=0;i<n;i++)
	{
		printf("enter element%d=",i);
		scanf("%d",&arr[i]);
	}
	printf("unsorted list=\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	//selection sorting//
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			t=arr[min];
			arr[min]=arr[i];
			arr[i]=t;
		}
	}
	
	
	printf("\nsorted list=\n");
	for(k=0;k<n;k++)
		printf("%d\t",arr[k]);
	
	return 0 ;
}
