#include <stdio.h>

int main()
{
    int arr[10],i,j,n,temp,min;
    printf("Enter the no. of elements");
	scanf("%d",&n);
    
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

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
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}