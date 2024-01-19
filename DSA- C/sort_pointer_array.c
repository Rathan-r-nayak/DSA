#include<stdio.h>
void disp(int *a[ ], int n)
{
 int i,j, temp;
 for (i=0; i<n-1; i++)
 for (j=i+1; j<n; j++)
 {
 if (a[j] < a[i])
 {
 temp = a[ j ];
 a[j]=a[ i ];
 a[ i ] = temp;
 }
 }


}void main( )
{
 int i, a[10],n;
 printf (" enter the size of an array:");
 scanf("%d", &n);
 printf (" enter the array elements:");
 for (i=0; i<n; i++)
 scanf ("%d", &a[i]);
disp (a,n);
printf(" array elements after sorting " );
for(i=0;i<n;i++)
printf ("%d", a[i]);
}
