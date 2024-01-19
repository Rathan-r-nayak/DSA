#include<stdio.h>
void main()
{
    int n,key,i,h,l,m;
    int arr[20];
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);

    h=n-1;
    l=0;
    m=(h+l)/2;
    while(l<=h)
    {
        if(key==arr[m])
        {
            printf("Key found at %d pos",m);
            exit(0);
        }
        else if(key<arr[m])
        {
            h=m-1;
            m=(h+1)/2;
        }
        else
        {
            l=m+1;
            m=(h+l)/2;
        }
    }
    if(l>h)
    {
        printf("key not found");
    }
    
}