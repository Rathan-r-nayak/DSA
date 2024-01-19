#include<stdio.h>
#include<stdlib.h>
#define amsize 6
int a[amsize] ,i,n,elem,pos;
void main()
{
    int op;
    do{
        printf("\n__________MENU__________\n");
        printf("Enter 1-create(),    2-display(),    3-insert(),      4-delete(),  5-exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1:create();
            break;
        case 2:display();
            break;
        case 3:insert();
            break;
        case 4:delete();
            break;
        case 5:exit(0);
            break;
        
        default:printf("Enter valid option");
            break;
        }
    }
    while(op!=5);
}

void create()
{
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void insert()
{
    printf("Enter the element to be inserted:\n");
    scanf("%d",&elem);
    printf("enter the position:");
    scanf("%d",&pos);
    if(n==amsize || pos>n)
    {
        printf("INVALID\n");
    }
    else
    {
        for(i=n-1;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=elem;
        n=n+1;
    }
    display();
}
void delete()
{
    printf("Enter the element to be deleted:\n");
    scanf("%d",&elem);
    printf("enter the position:");
    scanf("%d",&pos);
    if(n==0 || pos>=n)
    {
        printf("INVALID\n");
    }
    else
    {
        for(i=pos;i<=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
    }
    display();
}