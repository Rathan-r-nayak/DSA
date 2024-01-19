import java.util.HashMap;

public class maxLengthBetweenEqualCharacters
{
    public static void main(String args[])
    {
        String s="abca";//cbzxy =-1   aa=0

        HashMap<Character,Integer> ind = new HashMap<>();
        int res = -1;

        for(int i=0;i<s.length();i++)
        {
            char c = s.charAt(i);
            if(!ind.containsKey(c))
            {
                ind.put(c,i);
            }
            else
            {
                int l = i-ind.get(c)-1;
                // ind.put(c,i);
                res = (l>res?l:res);
            }
        }
        System.out.println(res);
    }
}