// https://www.geeksforgeeks.org/linear-search/


import java.util.Scanner;

public class LinearSearch
{
    public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        int n,key;
        System.out.println("Enter the size of array:");
        n=in.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=in.nextInt();
        }
        System.out.println("Enter the key to be searched:");
        key=in.nextInt();


        // searching
        for(int i=0;i<n;i++)
        {
            if(key==arr[i])
            {
                System.out.println("Key "+key+" found at "+i+" location");
            }
        }

    }
}