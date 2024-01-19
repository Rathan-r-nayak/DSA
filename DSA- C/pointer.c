#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("a=%d",a);
    printf("&a=%d",&a);
    printf("p=%d",p);
    printf("*p=%d",*p);
    return 0;
}
