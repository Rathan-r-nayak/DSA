#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10],n,i,ind=0;
	printf("Enter the no. of elements");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			arr[ind++]=arr[i]*arr[i];
		}
	}
	for(i=ind;i<n;i++)
	{
		arr[i]=NULL;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
}