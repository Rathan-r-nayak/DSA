import java.util.ArrayList;

public class SortVowel
{
    public static void main(String args[]) 
    {
        String s = "RathannayakComputerSciencE";
        StringBuffer a = new StringBuffer(s);
        int pos = 0;
        ArrayList <Integer> arr = new ArrayList <Integer>();

        for(int i=0;i<a.length();i++)
		{
            if((arr.contains(i)))
            {
                continue;
            }
            pos = i;
		    char vov = a.charAt(i);
		    if(vov == 'A' || vov == 'E' || vov == 'I' || vov == 'O' || vov == 'U' || vov == 'a' || vov == 'e' || vov == 'i' || vov == 'o' || vov == 'u')
		    {
		        for(int j=i+1 ; j<a.length() ; j++)
		        {
                    if((arr.contains(j)))
                    {
                        continue;
                    }
                    
		            char iter = a.charAt(j);
                    if(i==0 && !(iter == 'A' || iter == 'E' || iter == 'I' || iter == 'O' || iter == 'U' ||   iter == 'a' || iter == 'e' || iter == 'i' || iter == 'o' || iter == 'u'))
                    {
                        arr.add(j);
                    }

		            if((iter == 'A' || iter == 'E' || iter == 'I' || iter == 'O' || iter == 'U' ||   iter == 'a' || iter == 'e' || iter == 'i' || iter == 'o' || iter == 'u') && (iter < vov))
		            {
		                vov = iter;
                        pos = j;
		            }
                    
		        }
                // System.out.println(arr);
                a.replace(pos,pos+1,String.valueOf(a.charAt(i)));
                a.replace(i,i+1,String.valueOf(vov));
            }
            
            
           

        }
        
        // return a.toString();
        System.out.println(a);
    }
}




// or
//  public String sortVowels(String s) {
//         ArrayList <Character> vowel = new ArrayList<Character>();
//         ArrayList <Integer> pos = new ArrayList<Integer>();
//         StringBuffer a = new StringBuffer(s);

//         for(int i=0 ; i<s.length() ; i++)
//         {
//             char vov = a.charAt(i);
//             if(vov == 'A' || vov == 'E' || vov == 'I' || vov == 'O' || vov == 'U' || vov == 'a' || vov == 'e' || vov == 'i' || vov == 'o' || vov == 'u')
// 		    {
//                 vowel.add(vov);
//                 pos.add(i);
//             }
//         }

//         Collections.sort(vowel);


//         for(int i=0 ; i<pos.size() ; i++)
//         {
//             a.replace(pos.get(i),pos.get(i)+1,String.valueOf(vowel.get(i)));
//         }

//         return a.toString();
//     }




class Solution {
    public String sortVowels(String s) {
        ArrayList <Character> vowel = new ArrayList<Character>();
        ArrayList <Integer> pos = new ArrayList<Integer>();
        StringBuffer a = new StringBuffer(s);
        int posit = 0;

        for(int i=0 ; i<s.length() ; i++)
        {
            char vov = a.charAt(i);
            if(vov == 'A' || vov == 'E' || vov == 'I' || vov == 'O' || vov == 'U' || vov == 'a' || vov == 'e' || vov == 'i' || vov == 'o' || vov == 'u')
		    {
                vowel.add(vov);
                pos.add(i);
            }
        }

        // Collections.sort(vowel);
        for(int i=0 ; i<vowel.size(); i++)
        {
            posit = i;
            char vov = vowel.get(i);
            for(int j=i+1 ; j<vowel.size() ; j++)
            {
                if(vowel.get(j) < vov)
                {
                    vov = vowel.get(j);
                    posit = j;
                }
            }
            vowel.set(posit,vowel.get(i));
            vowel.set(i,vov);

            a.replace(pos.get(i),pos.get(i)+1,String.valueOf(vowel.get(i)));
        }


        // for(int i=0 ; i<pos.size() ; i++)
        // {
        //     a.replace(pos.get(i),pos.get(i)+1,String.valueOf(vowel.get(i)));
        // }

        return a.toString();
    }
}