#include <stdio.h>  
#include<string.h>  
int main()  
{
    char source[20]="nayak";
    char target[20]="rathan ";
    strcat(source,target);
    printf("%s",target);
}