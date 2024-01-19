import java.util.ArrayList;

public class UniqueLengthPalindromicSubsequences {
    public static void main(String[] args) {
		String s = "nhzosdwmwomlebymvkbqbdohzdtpufnllwzhqptyffreebalphgsslryuqryloqxvbehtohdrsynmcbligczvoyzrhbtmqxepqmcjirwishyvoliizknzrokejtqtfoylsdzpgeooczxldvmsnhvzgojxnwwhukynvhhpzmdoiooliesogubtsvkrvzmanpwwlnlskremzisqwwwjistwabqxztlcqwlsxbuhjdnouecwqgxdlggauxrelipqlgvfkmgoozhzrhortbpmxhupjqqrsrvqxqilptchtedoznxvgvmuticzdzwszzujuanlrrpvycgawoxfbvxhkdyhmcxdlrtyktekcmkyajlywcrozjkedwlrqpaugdobtffwidxawddgeraaugiebtntmuncnybuwnlzbmkrmxbcpbhqoiznlpcswqtsflfilkclrjdxbvcctvopoidjrtwszpjpfrfcvjtouvzvpqayvgesiiawokdqatfkijsuocbeqrhrmlhtclhrmrbkpahfdgiatejsnvubwbaxwooskcaiuqvxcvgpnkiiiencnxjsvvgdfptreumttlyoqqwqdblhhbnilbvbwwpnmouxlvqimdbcxisnegllnejhkipuqbcrhsrxwipdjzskpyijuvrvtrnqljjefymfdcvcuvwaitdjevuvelkrglhtlnivmvjyzmhjnzvudgqwocvwhthxdlyfljabngzjayvqudhvsdslacgvosnchhbkulcxpangdlpgkrczbnnzokmqzgauitqutiboveumsqvbulhbfbynzogtejuwi";
		
		ArrayList <String> arr = new ArrayList <String>();
        int c = 0;

        for(int i=0 ; i<s.length()-2 ; i++)
        {
            for(int j=i+2 ; j<s.length() ; j++)
            {
                if((s.charAt(i) == s.charAt(j)))
                {
                    for(int k=i+1; k<j ; k++)
                    {
                        String temp = s.substring(i,i+1)+s.substring(k,k+1)+s.substring(i,i+1);
                        if(!(arr.contains(temp)))
                        {
                            arr.add(temp);
                            c++;
                        }
                    }
                }
            }
        }
        System.out.println(c);
	    
	}
}
