public class ZeroAtEnd {
    public static void main(String[] args) {
	    int nums[] = {0,1,0,3,12};
	    int i=0,z=0;
        for(i=0;i<nums.length-z;i++)
        {
            if(nums[i]==0)
            {
                int j=0;
                for(j=i;j<nums.length-z-1;j++)
                {
                    nums[j] = nums[j+1];
                }
                nums[j] = 0;
                if(i == nums.length-1)
                {
                    break;
                }
                i--;
                z++;
            }
        }
        
        for(i=0;i<nums.length;i++)
        {
		    System.out.println(nums[i]);
        }
	}
}
