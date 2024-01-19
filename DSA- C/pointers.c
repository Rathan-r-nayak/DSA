#include<stdio.h>
int main()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    printf("++a=%d\n",++a);
    printf("a=%d\n",a);
    printf("++(*p)=%d\n",++(*p));
    printf("--(*q)=%d\n",--(*q));
    printf("--b=%d\n",--b);
    return 0;
}