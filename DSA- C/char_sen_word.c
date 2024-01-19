// #include <stdio.h>
// #define BUFFSIZE 25
  
// // Driver code
// int main()
// {
//     char sen[BUFFSIZE];
//     char sen2[100];
//     printf("Enter the input:");
//     fgets(sen, BUFFSIZE, stdin);
//     printf("Output : %s", sen);

//     printf("Enter the next input:");
//     scanf("%[^\n]s",sen2);
//     printf("Output : %s", sen2);
    
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char c;
    char str[100];
    char sen[100];
    
    printf("Enter the input:");
    scanf("%c",&c);
    printf("Enter the input:");
    scanf("%s",str);
    // while ((getchar()) != '\n');
    printf("Enter the input:");
    scanf(" %[^\n]s",sen);
    // fgets(sen,100,stdin);
    
    printf("%c\n%s\n",c,str);
    printf("%s",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}