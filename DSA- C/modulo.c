#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s=0,i;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    for(i=1;i<=5;i++)
    {
        s+=n%10;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}