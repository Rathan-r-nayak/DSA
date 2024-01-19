#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1000];
    int i,digit;
    int f[10]={0};
    
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(isdigit(str[i]))
        {
            int digit=str[i]-'0';
            f[digit]++;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",f[i]);
    }
    
    return 0;
}


