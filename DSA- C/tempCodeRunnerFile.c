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