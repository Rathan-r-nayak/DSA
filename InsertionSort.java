import java.util.Scanner;

public class InsertionSort {
    public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        int n,key,j;
        System.out.println("Enter the size of array:");
        n=in.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=in.nextInt();
        }


        // sorting
        for(int i=1;i<n;i++)
        {
            key=arr[i];
            j=i-1;

            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }


        // printing
        System.out.println("Elements are:");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]);
        }

    }
    
}
