import java.util.ArrayList;

public class BinaryOfNumber
{
    
    public static void main(String args[])
    {
        ArrayList<Integer> arr = new ArrayList<>();
        int a=8;
        bin(a,arr);
        System.out.println();
        baseThree(a);
        System.out.println();

        for(int i:arr)
        {
            System.out.print(i);
        }

    }
    public static void bin(int n,ArrayList<Integer> arr)
    {
        if(n>1)
        {
            bin(n/2,arr);
        }
        System.out.print(n%2);
        arr.add(n%2);

    }

    public static void baseThree(int n)
    {
        if(n>1)
        {
            baseThree(n/3);
        }
        System.out.print(n%3);
    }
}