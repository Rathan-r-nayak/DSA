#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(i=0;i<strlen(s);i++)
    {
        if(strcmp(*(s+i)," "))
        {
            printf("\n");
        }
        printf("%c",*(s+i));
    }
    return 0;
}