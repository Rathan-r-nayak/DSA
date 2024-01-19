import java.util.ArrayList;

//https://assets.leetcode.com/uploads/2021/11/03/failing1-grid.jpg

public class MinimumFallingPathSum
{
    public static void main(String args[])
    {
        int matrix[][] = {{2,1,3},{6,5,4},{7,8,9}};

        int row=matrix.length - 1;
        int col = matrix[0].length;

        while(row>0)
        {
            for(int j=0;j<col;j++)
            {
                int val = getMin(j,col,row,matrix);
                matrix[row-1][j] = val + matrix[row-1][j];
            }
            row--;
        }

        int res=matrix[0][0];
        for(int j=1;j<col;j++)
        {
            res = (res>matrix[0][j]?matrix[0][j]:res);
        }
        System.out.println("minimum sum of any falling path through matrix is :"+res);
    }



    public static int getMin(int j,int col,int row,int matrix[][])
    {
        if(j == 0)
        {
            return Math.min(matrix[row][j],matrix[row][j+1]);
        }
        else if(j == col-1)
        {
            return Math.min(matrix[row][j-1],matrix[row][j]);
        }
        return Math.min(matrix[row][j-1],Math.min(matrix[row][j],matrix[row][j+1]));
    }
}