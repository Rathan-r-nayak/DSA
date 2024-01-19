#include<stdio.h>
void main()
{
    int k=10;
    void *p;

    p=&k;
    printf("%d",*(int *)p);
}