#include<stdio.h>

int sum(int *a,int *b)
{
    *a=20;
    return *a + *b;
}

void main()
{
    int a,b,s;
    a=10;
    b=20;
    s=sum(&a,&b);
    printf("sum=%d",s);
    printf("\na=%d",a);
}