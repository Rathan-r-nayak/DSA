#include<stdio.h>
#include<stdlib.h>

void main()
{
    char inp,i,j;
    printf("Enter the charecter:");
    scanf("%c",&inp);

    for(i='A';i<=inp;i++)
    {
        for(j='A';j<=inp;j++)
        {
            if(j<=i)
            {
                printf("%c",j);
            }
            else
            {
                printf("-");
            }
        }
        for(j=inp-1;j>='A';j--)
        {
            if(j<=i)
            {
                printf("%c",j);
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
}