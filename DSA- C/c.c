#include<stdio.h>
#include<string.h>
typedef struct 
{
    char name[10];
    int age;
    char usn[10];
}student;
void main()
{
    //typedef struct student si;
    student s[10];
    int i,n;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter studnt%d details\nname\tage\tusn\n",i+1);
        scanf("%s%d%s",s[i].name,&s[i].age,s[i].usn);
    }
    for(i=0;i<n;i++)
    {
        printf("name:%s\nage:%d\nusn:%s\n",s[i].name,s[i].age,s[i].usn);
    }
}