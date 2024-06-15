public class MinimumNumberofOperationstoMoveAllBallstoEachBox {
    public static void main(String args[]) {
        String boxes = "001011";

        int n= boxes.length();
        int left[] = new int[n];
        int right[] = new int[n];

        int c1 = boxes.charAt(0)-'0';
        int c2 = boxes.charAt(n-1)-'0';
        for(int i=1;i<n;i++)
        {
            left[i] = c1 + left[i-1];
            c1 = c1+boxes.charAt(i)-'0';

            right[n-i-1] = c2 + right[n-i];
            c2 = c2 + boxes.charAt(n-i-1)-'0';
        }

        System.out.print("[");
        for(int i=0;i<n;i++)
        {
            left[i] = left[i]+right[i];
            System.out.print(left[i]+", ");
        }
        System.out.print("]");
        
    }
}
