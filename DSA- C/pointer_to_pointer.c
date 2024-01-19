#include <stdio.h>
int main()
{
    int **ptr1,*ptr2;
    int a=10;
    ptr2=&a;
    ptr1=&ptr2;

    printf("a=%d\n",a);
    printf("*ptr2=%d\n",*ptr2);
    printf("**ptr1=%d\n",**ptr1);
    printf("---------\n");
    printf("&a=%d\n",&a);
    printf("ptr2=%d\n",ptr2);
    printf("*ptr1=%d\n",*ptr1);
    printf("---------\n");
    printf("&ptr2=%d\n",&ptr2);
    printf("ptr1=%d\n",ptr1);
    printf("---------\n");
    printf("&ptr2=%d\n",&ptr2);

}