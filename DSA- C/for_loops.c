#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i,j;
    char *num[]={"","one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
    scanf("%d\n%d", &a, &b);
      // Complete the code.
      for(i=1;i<10;i++)
      {
          if(i>=a)
          {
              printf("%s\n",num[i]);
          }
          if(i==b)
          {
              break;
          }
      }
      for(i=10;i<=b;i++)
      {
          if(i%2==0)
        {
          printf("even\n");
        }
        else
        {
          printf("odd\n");
        }
      }
    return 0;
}

