//implementation of selection of sort //
#include<stdio.h>
intmain()
{
	int i,j,k,n,min,t,arr[20];
	print("enter number of data in array=\n");
	scanf("%d",&n);
	printf("enter data inside array=\n");
	for(i=0;i<n;i++)
	{
		printf("enter element%d = ",i+1);
		scanf("%d",&arr[i]);
		
	}
	printf("unsorted list=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	//selection sort started//
	for(j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
	}
	if(min!=1)
	{
		t=arr[min];
		arr[min]=arr[j];
		arr[i]=t;
	}
	printf("\n----------SORTED LIST-------------\n");
	for(k=0;k<n;k++)
		printf("%d\t",arr[k]);
	return 0 ;
} 
