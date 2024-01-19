public class Binary
{
    public static void main(String args[])
    {
        int a=9;
        bin(a);

    }
    public static void bin(int n)
    {
        if(n>1)
        {
            bin(n/2);
        }
        System.out.print(n%2);
    }
}