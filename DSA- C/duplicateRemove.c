#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[]={1,1, 2, 4, 3, 5, 6, 5, 7, 1};
    int n=10,i,j,k;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d",sizeof(a)/sizeof(int));

}