#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10],i,j,n,temp;
    printf("Enter the no. of elements");
	scanf("%d",&n);
    
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])//for decreasing order replace > with <
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
    return 0;
}