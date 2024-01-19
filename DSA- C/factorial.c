#include<stdio.h>

int fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fac(n-1);
}

void main()
{
    int n=5;
    int i,res,res2=1;
    res=fac(n);
    printf("%d",res);

    while(n>0)
    {
        res2=res2*n;
        n-=1;
    }
    printf("\n%d",res2);
}