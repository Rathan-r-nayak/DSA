#include<stdio.h>
#include<stdlib.h>
#define max 5
void CQinsert();
void CQdelete();
void CQdisplay();
int rear=-1,front=0,count=0;
char cq[max],item;
void main()
{
    int ch;
    do{
        printf("1-insert()\n2-delete()\n3-display()\n4-exit()\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:CQinsert();
            break;
        case 2:CQdelete();
        break;
        case 3:CQdisplay();
        break;
        case 4:exit(0);
        break;
        default:printf("Enter valid choice");
            break;
        }
    }
    while ((ch!=4));    
}
void CQinsert()
{
    if(count==max)
    {
        printf("CQ overflow");
        return;
    }
    else
    {
        printf("\nEnter the element to be inserted:");
        __fpurge(stdin);
        scanf("%c",&item);
        rear=(rear+1)%max;
        cq[rear]=item;
        count=count+1;
    }
}
void CQdelete()
{
        if(count==0)
    {
        printf("CQ overflow");
        return;
    }
    else
    {
        item=cq[front];
        front=(front+1)%max;
        count=count-1;
        printf("deleted=%c",item);
    }
}
void CQdisplay()
{
    int i;
    if(count==0)
    {
        printf("CQ overflow");
        return;
    }
    else
    {
        for(i=front;i!=rear;i=(i+1)%max)
        {
            printf("\n%c",cq[i]);
        }
            printf("\n%c",cq[i]);

    }
}