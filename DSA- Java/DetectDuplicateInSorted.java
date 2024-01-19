public class DetectDuplicateInSorted {
    public static int removeDuplicates(int[] nums) {
        int n = nums.length;
        int ind = 1;

        for(int i=1;i<n;i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[ind++]=nums[i];
            }
            
        }
        for(int i=0;i<ind;i++)
        {
            System.out.print(nums[i]+" ");
        }
        return ind;
    }


    public static void main(String args[])
    {
        int arr[] = {1, 2, 2, 3, 4, 4, 6, 6, 8, 9};
        System.out.println("\nsize: "+removeDuplicates(arr));
    }
}
