#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int arr[10];
    int i,n,tmp=0,c=0,len=0,arr_len;
    printf("Enter the no. of elelments:");
    scanf("%d",&arr_len);

    printf("\nEnter the elements:");
    for(i=0;i<arr_len;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<arr_len;i++)
    {
        tmp=arr[i]%10;
        n=arr[i];
        while(n!=0)
        {
            n=n/10;
            if(n%10<=tmp)
            {
                c++;
            }
            len++;
        }
        if(c==len)
        {
            printf("\n%d",arr[i]);
        }
        c=0;
        len=0;
    }
    

    


}