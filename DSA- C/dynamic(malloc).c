#include<stdio.h>
int main()
{
    int n,i,sum=0,*p;
    printf("Enter n");
    scanf("%d",&n);
    p=(int *) malloc(n*sizeof(int));
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        //p=p+sizeof(int);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
        //p=p+sizeof(int);
    }
}