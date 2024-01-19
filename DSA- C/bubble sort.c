#include<stdio.h>
void main()
{
    int a[10],n,i,j,temp=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("Enter the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1-i;j++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
for (i = 0; i < n; i++)
{
     printf(a[i]);
}
}