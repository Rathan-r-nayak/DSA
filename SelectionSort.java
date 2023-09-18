// https://www.geeksforgeeks.org/selection-sort/

import java.util.Scanner;

public class SelectionSort {
    public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        int n,min,temp;
        System.out.println("Enter the size of array:");
        n=in.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter the elements of array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=in.nextInt();
        }


        // sorting
        for(int i=0;i<n-1;i++)
        {
            min=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;

        }

        System.out.println("Elements are:");
        for(int i=0;i<n;i++)
        {
            System.out.println(arr[i]);
        }

    }
}
