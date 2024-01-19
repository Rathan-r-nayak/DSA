import java.util.*;
public class CombinationOfNumber
{
    public static void main(String args[])
    {
        int n,k;
        n=4;
        k=2;//size of combination

        List<List<Integer>> res = new ArrayList<>();
        Solution ob = new Solution();
        res = ob.combine(n,k);
        for(int i=0;i<res.size();i++)
        {
            System.out.println(res.get(i));
        }
    }
}


class Solution {
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> res = new ArrayList<>();
        combine(res,new ArrayList<>(),1,n,k);
        return res;
    }

    public void combine(List<List<Integer>> res,List<Integer> comb,int start,int n,int k)
    {
        if(k==0)
        {
            res.add(new ArrayList<>(comb));
            return;
        }

        for(int i=start;i<=n;i++)
        {
            comb.add(i);
            combine(res,comb,i+1,n,k-1);
            comb.remove(comb.size()-1);
        }
    }
}



