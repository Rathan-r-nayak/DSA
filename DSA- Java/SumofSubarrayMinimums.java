class SumofSubarrayMinimums
{
    public static void main(String args[]) {
        int arr[]= data();

        int n = sumOf(arr.length);
        int x=0,cnt=0;
        long res = 0l;
        
        while(n!=cnt)
        {
            for(int i=0;i<arr.length - x;i++)
            {
                res+=calcSub(i,i+x,arr);
                cnt++;
            }
            x+=1;
        }
        System.out.println((int)(res%(Math.pow(10,9)+7)));
        
    }

    public static int[] data()
    {
        int arr[] = {12509,3428,1626,9930,26732,27777,7108,18112,334,25501,2255,12108,16605,20298,26378,27552,3785,28722,28445,3489,11152,5498,26240,9815,7625,7732,11808,20230,3107,26156,12402,16871,29893,25456,4825,16070,16579,5325,6919,28231,15015,11190,19763,18910,1310,14006,24334,27574,21,6485,29569,27553,2632,15438,28717,21301,22125,27436,25220,17149,11710,26419,11332,27157,16504,2522,10197,25496,1277,19363,7312,19129,16099,9815,25932,14711,6438,6510,16785,23960,13086,2958,10912,18042,25833,16477,10405,28071,19129,14560,3042,7951,20732,16775,22255,17246,305,16313,12982,22152,22153,28636,27763,24020,18413,17539,2905,8227,2568,11719,24185,4820,14281,20507,15760,15005,3249,26447,11055,15370,22956,11234,5836,12827,6602,28645,4060,1214,11502,11204,6531,16003,21978,14212,12469,6977,8993,17249,19054,27845,14928,14637,22318,10682,25035,13942,6559,24141,25280,10065,8900,21639,17801,22946,8837,21128,25924};
        return arr;
    }

    public static int calcSub(int i,int x,int arr[])
    {
        int min = arr[i];
        for(int j=i+1;j<=x;j++)
        {
            min = (min>arr[j]?arr[j]:min);
        }
        return min;
    }



    public static int sumOf(int n)
    {
        if(n==1)
        {
            return 1;
        }
        return n+sumOf(n-1);
    }
}