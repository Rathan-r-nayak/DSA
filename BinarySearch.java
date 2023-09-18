// https://www.geeksforgeeks.org/binary-search/


import java.util.Scanner;

public class BinarySearch {
    public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        int n,key;
        System.out.println("Enter the size of array:");
        n=in.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of array in increasing order:");
        for(int i=0;i<n;i++)
        {
            arr[i]=in.nextInt();
        }
        System.out.println("Enter the key to be searched:");
        key=in.nextInt();


        // searching
        int mid,high,low,flag=0;
        high=n-1;
        low=0;
        mid=(high+low)/2;
        while(low<=high)
        {
            if(arr[mid]==key)
            {
                flag=1;
                break;
            }
            else if(arr[mid]>=key)
            {
                high=mid-1;
                mid=(high+low)/2;
            }
            else
            {
                low=mid+1;
                mid=(high+low)/2;
            }
        }
        if(flag!=0)
        {
            System.out.println("Key "+key+" found at "+mid+" location");
        }
        else
        {
            System.out.println("Key "+key+" not present in array");
        }

    }
}
