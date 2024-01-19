import java.util.Scanner;




public class Stack {
    static int stack[];
    static int top=-1;
    static int n;

    public static void push(int item)
    {
        if(top==n-1)
        {
            System.out.println("Stack is full");
        }
        else
        {
            top+=1;
            stack[top]=item;
            System.out.println("pushed item is "+item);
        }
    }

    public static void pop()
    {
        if(top==-1)
        {
            System.out.println("Stack is empty");
        }
        else
        {
            System.out.println("poped item is "+stack[top]);
            top=top-1;
        }
    }

    public static void display()
    {
        if(top==-1)
        {
            System.out.println("Stack is empty");
        }
        else
        {
            for(int i=top;i>=0;i--)
            {
                System.out.println(stack[i]);
            }
        }
    }



    public static void main(String args[])
    {
        System.out.println("Enter the size:");
        Scanner in =new Scanner(System.in);
        n=in.nextInt();
        stack=new int[n];

        
        while(true)
        {
            System.out.println("1->Push\n2->Pop\n3->display\n4->exit\nEnter the choice:");
            int ch=in.nextInt();
            switch(ch)
            {
                case 1:
                System.out.println("Enter the element:");
                int elem=in.nextInt();
                push(elem);
                break;

                case 2:
                pop();
                break;

                case 3:
                display();
                break;

                case 4:
                System.exit(0);

                default:
                System.out.println("Enter the choice correctly");    
            }

        }
    }
    
}
