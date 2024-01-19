public class RotateImage {
    public static void main(String args[]) {
        int matrix[][] = {{1, 2, 3}, {4, 5, 6} , {7, 8, 9}};


        int row=matrix.length,temp;
        int column=matrix[0].length;

        for(int i=0;i<row/2;i++)
        {
            for(int j=0;j<column;j++)
            {
                temp = matrix[i][j];
                matrix[i][j]=matrix[row-i-1][j];
                matrix[row-i-1][j] = temp;
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=i+1;j<column;j++)
            {
                // System.out.println(matrix[i][j]+" "+matrix[j][i]);
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
                // System.out.println(matrix[i][j]+" "+matrix[j][i]);
            }
        }


        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    
}
