import java.util.Scanner;

public class Queue {
    static int queue[];
    static int front=0,rear=-1;
    static int n;


    public static void enqueue(int item)
    {
        if(rear==n-1)
        {
            System.out.println("Queue is full");
        }
        else
        {
            rear+=1;
            queue[rear]=item;
        }
    }

    public static void dequeue()
    {
        if(rear==-1 && front==0)
        {
            System.out.println("Queue is empty");
        }
        else
        {
            System.out.println("deleted item is "+queue[front]);
            front=front+1;

            if(front>rear)
            {
                rear=-1;
                front=0;
            }
        }
    }

    public static void display()
    {
        if(rear==-1 && front==0)
        {
            System.out.println("Queue is empty");
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                System.out.println(queue[i]);
            }
        }
    }





    public static void main(String args[])
    {
        System.out.println("Enter the size:");
        Scanner in =new Scanner(System.in);
        n=in.nextInt();
        queue=new int[n];

        
        while(true)
        {
            System.out.println("1->Enqueue\n2->Dequeue\n3->display\n4->exit\nEnter the choice:");
            int ch=in.nextInt();
            switch(ch)
            {
                case 1:
                System.out.println("Enter the element:");
                int elem=in.nextInt();
                enqueue(elem);
                break;

                case 2:
                dequeue();
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
