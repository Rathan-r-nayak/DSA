#include<stdio.h>
union student
{
    char name[20];
    int age;
    char course[10];
};
void main()
{
    union student a;
    printf("Enter name");
    scanf("%s",a.name);
    printf("name=%s",a.name);
    printf("Enter age");
    scanf("%d",&a.age);
    printf("age=%d",a.age);

}
