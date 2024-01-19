#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[10];
    int i;
    
    printf("Enter the string:");
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            printf("\n%c is an vowel",str[i]);
        }
        else
        {
            printf("\n%c is not an vowel",str[i]);
        }
    }

}