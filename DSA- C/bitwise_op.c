#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a,b;
  //Write your code here.
  int and=0,or=0,xor=0;
  for(a=1;a<n;a++)
  {
      for(b=a+1;b<=n;b++)
      {
          if((a & b)<k && (a & b)>and)
          {
              and=a & b;
          }
          if((a | b)<k && (a|b)>or)
          {
              or=a | b;
          }
          if((a ^ b)<k && (a^b)>xor)
          {
              xor=a ^ b;
          }
      }
  }
  printf("%d\n%d\n%d\n",and,or,xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
