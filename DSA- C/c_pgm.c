// 1. Remove all the odd elements in a vector and square the even elements and sort it. +
// 2. Print Chess Board.
// 3. Count the consonents. +
// 4. If the unit digits place in greater than all the other element of a decimal number.   +
// 5. Elements in a increasing order or decreasing order in a array.    +
// 6. Frequency Of Elements In An Array,
// 7. Vowels Or Not,    +
// 8. Printing Chess Board,
// 9. Array in decreasing order or not. +
// 10. Second non repeating element in a vector.
// 11. 2 words in a string


#include<stdio.h>

int main()
{
    int i=5;
    int *p1,*p2;
    p1=&i;
    p2=p1;
    printf("%d %d",*p1,*p2);
    *p1=6;
    printf("\n%d %d %d",*p1,*p2,i);
}