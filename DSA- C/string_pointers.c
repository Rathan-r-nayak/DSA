#include<stdio.h>
#include<conio.h>
void main()
{
    char *str;
    scanf("%[^\n]s",str);
    // str = "hello world!"; //Legal
    // The content of the string can be printed using printf() and puts().
    printf("%s\n", str);
    puts(str);

    system();
    while(*str != "\0")
    {
        printf("%c\n",*str);
        str++;
    }
}