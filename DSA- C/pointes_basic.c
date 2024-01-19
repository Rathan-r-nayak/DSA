#include<stdio.h>
void main()
{
    int k=10;
    int *p;
    
    p=&k;
    printf("\nk=%d",k);
    printf("\n*p=%d",*p);

    *p=11;
    printf("\nk=%d",k);
    printf("\n*p=%d",*p);

    k=12;
    printf("\nk=%d",k);
    printf("\n*p=%d",*p);


}