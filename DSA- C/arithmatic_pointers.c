#include <stdio.h>
int main()
{
    int *p;
    int a=10;

    p=&a;
    printf("a=%d\n",a);
    printf("&a=%d\n",&a);
    printf("p=%d\n",p);
    printf("*p=%d\n",*p);
    printf("&p=%d\n",&p);
}