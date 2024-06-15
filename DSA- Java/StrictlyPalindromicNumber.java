import java.util.ArrayList;

public class StrictlyPalindromicNumber {
    public static void main(String args[]) {
        // boolean res = true;
        int n = 9;
        for(int i=2;i<=n-2;i++)
        {
            ArrayList<String> arr  = new ArrayList<>();
            base(i,n,arr);

            for(int j=0;j<arr.size()/2;j++)
            {
                if(!arr.get(j).equals(arr.get(arr.size()-1-j)))
                {
                    System.out.println(false);
                    return;
                }
            }
        }
        System.out.println(true);
    }

    public static void base(int i,int n, ArrayList<String> arr)
    {
        if(n>1)
        {
            base(i,n/i,arr);
        }
        arr.add(""+n%i);
    }
}
