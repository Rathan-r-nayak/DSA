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
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                printf("Not in decreasing order");
                exit(0);
            }
        }
    }
    printf("Decreasing order");

}