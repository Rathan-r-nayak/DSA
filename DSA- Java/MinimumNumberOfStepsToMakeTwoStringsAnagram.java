import java.util.ArrayList;
import java.util.HashMap;

public class MinimumNumberOfStepsToMakeTwoStringsAnagram {
    public static void main(String args[])
    {
        String t="practice";
        String s="leetcode";
        HashMap<Character,Integer> map1 = new HashMap<>();
        HashMap<Character,Integer> map2 = new HashMap<>();
        ArrayList<Character> arr = new ArrayList<>();
        int res=0;

        int n = s.length();
        for(int i=0;i<n;i++)
        {
            char cs=s.charAt(i);
            char ct=t.charAt(i);
            map1.put(cs,map1.getOrDefault(cs,0)+1);
            map2.put(ct,map2.getOrDefault(ct,0)+1);
            if(!arr.contains(cs))
            {
               arr.add(cs); 
            }
            
        }
        for(char c:arr)
        {
            int n1=map1.getOrDefault(c,0);
            int n2=map2.getOrDefault(c,0);
            res +=((n1>=n2)?n1-n2:0);
        }
        System.out.println(res);
    }
}
