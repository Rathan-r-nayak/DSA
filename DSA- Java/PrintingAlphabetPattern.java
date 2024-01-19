import java.util.Scanner;

public class PrintingAlphabetPattern {
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        char inp;

        System.out.print("Enter the charecter:");
        String str=in.next();
        inp=str.charAt(0);
        int c=65;


        int n=inp-65+1;
        int col=(n-1)*2+1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<col;j++)
            {
                System.out.print((char)c);    //(n-2)*2+1
            }
        }

        System.out.println(n);
        
    }
}
