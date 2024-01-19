#include<stdio.h>
#include<stdlib.h>
#define max 5
int item,top=-1,s[max],i;
void main()
{
    int ch,elem;
    while (1)
    {
        printf("1=push()\n2-pop()\ndisplay()\n4-palindrome()\n5-exit()\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter the element to be pushed:");
        scanf("%d",&elem);
        push(elem);
            break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:palindrome();
        break;
        case 5:exit(1);
        break;
        default:printf("Enter valid choice");
            break;
        }
    }
    
}
void push(int item)
{
    if(top==max-1)
    {
        printf("stack is full");
        return;
    }
    else
    {
         top=top+1;
         s[top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
        return;
    }
    else
    {
        item=s[top];
        top=top-1;
        printf("Deleted item id %d",item);
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack underflow");
        return;
    }
    else
    {
        printf("stack contents are:\n");
        for(i=top;i>=0;i--)
        {
            printf("|%d|\n",s[i]);
        }
    }
}
void palindrome()
{
    int flag=1;
    printf("stack contents are");
    for(i=top;i>=0;i--)
        {
            printf("|%d|\n",s[i]);
        }
    printf("Reverse of stack is:\n");
    for(i=0;i<=top;i++)
        {
            printf("|%d|\n",s[i]);
        }
    for(i=0;i<top/2;i++)
    {
        if(s[top-i]!=s[i])
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("stack is not palindrome");
    }
    else
    {
        printf("stack is palindrome");
    }
}