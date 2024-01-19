#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i,tmp;
    scanf("%d", &n);
    arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n/2;i++)
    {
        tmp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=tmp;
    }


    /* Write the logic to reverse the array. */

    for(i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    return 0;
}