import java.util.Scanner;


public class MaxElemInK
{
    public static void main(String[] args) {
	    int k=3,i=0,t=0;
	    Scanner in = new Scanner(System.in);
	    String inp = in.nextLine();
	    String s[] = inp.split("\\s");
	    int n = s.length;
	    int arr[] = new int[n];
	    int res[] = new int[n-k+1];

	    for(String a:s)
	    {
	        arr[i++] = (Integer.parseInt(a));
	    }
	    
	    for(i=0 ; i<=n-k ; i++)
	    {
	        t = arr[i];
	        for(int j=i+1;j<i+k;j++)
	        {
	            if(arr[j]>t)
	            {
	                t = arr[j];
	            }
	        }
	        res[i] = t;
	    }
	    
	    
	    
	    
	    
	    for(int j:res)
	    {
	        System.out.println(j);
	    }
		
	}
}