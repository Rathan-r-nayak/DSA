#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="This is a sentence";
    char *p;
    p=strstr(str,"is");
    if(p)
    {
        printf("%s",p);
    }
}