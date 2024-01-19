import java.util.HashMap;

public class AnagramCheck {
    public static void main(String args[])
    {
        String s = "anagram";
        String t = "nagaram";

        boolean res = true;
        int n=s.length();
        HashMap<String,Integer> map = new HashMap<>(n);

        for(int i=0;i<n;i++)
        {
            String tmp = s.substring(i,i+1);
            if(map.containsKey(tmp))
            {
                map.put(tmp,map.get(tmp)+1);
            }
            else
            {
                map.put(tmp,1);
            }
        }

        for(int i=0;i<t.length();i++)
        {
            String tmp=t.substring(i,i+1);
            if(map.containsKey(tmp) && map.get(tmp)>0 && n==t.length())
            {
                map.put(tmp,map.get(tmp)-1);
            }
            else
            {
                res = false;
                break;
            }
        }

        System.out.println(res);
    }
}
