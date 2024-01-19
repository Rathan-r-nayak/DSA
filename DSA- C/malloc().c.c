#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int *p,n,sum=0,i;
    printf("enter n value:");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+(i*sizeof(int)));
        sum=sum+*(p+(i*sizeof(int)));
    }
    printf("sum=%d",sum);
    return 0;
}