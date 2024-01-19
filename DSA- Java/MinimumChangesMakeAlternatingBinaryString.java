public class MinimumChangesMakeAlternatingBinaryString {
    public static void main(String args[]) {
        String s = "1111";//0100   10
        int res0=0,res1=0;
        for(int i=0;i<s.length();i++)
        {
            if(i%2==0)
            {
                if(s.charAt(i)=='0')
                {
                    res1++;
                }
                else
                {
                    res0++;
                }
            }
            else
            {
                if(s.charAt(i)=='1')
                {
                    res1++;
                }
                else
                {
                    res0++;
                }
            }
        }
        System.out.println((res0>res1)?res1:res0);
        
    }
}



//another solution
// public static void main(String args[]) {
//         // ArrayList<String> arr = new ArrayList<>();
//         String s = "1111";//0100   10
//         int res1=0,res2=0;

//         // arr.add(s.substring(0,1));
//         String prev1 = s.substring(0,1);//1
//         // String prev2 = (prev1.equals("1")?"0":"1");//0
//         res2++;

//         for(int i=1;i<s.length();i++)
//         {
//             String cur1 = s.substring(i,i+1);
//             String cur2 = cur1;

//             if(cur1.equals(prev1))
//             {
//                 cur1 = (cur1.equals("1")?"0":"1");
//                 res1++;
//             }
//             else
//             {
//                 cur2 = (cur2.equals("1")?"0":"1");
//                 res2++;
//             }
//             // arr.add(cur);
//             prev1 = cur1;
            

//         }
//         System.out.println((res1>res2)?res2:res1);
        
// }