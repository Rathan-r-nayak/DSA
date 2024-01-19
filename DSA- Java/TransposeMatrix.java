class TransposeMatrix {
    public static void main(String args[]) 
    {
        int[][] matrix = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };
        
        int r = matrix.length;
        int c = matrix[0].length;
        int arr[][] = new int[c][r];
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                arr[j][i] = matrix[i][j];
            }
        }

        for(int i=0;i<c;i++)
        {
            for(int j=0;j<r;j++)
            {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
        
    }
}










// for(int i=0;i<r-1;i++)
//         {
//             if(res[i][1]>=intervals[i+1][0])
//             {
//                 res[tmp][0]=intervals[i][0];
//                 res[tmp][1]=intervals[i+1][1];
//             }
//             else
//             {
//                 res[tmp+1][0] = intervals[i+1][0];
//                 res[tmp+1][1] = intervals[i+1][1];
//                 tmp++;
//             }
//         }
//         return res;











// class Solution {
//     public int[][] transpose(int[][] matrix) {
//         List<List<Integer>> resList = new ArrayList<>();

//         for (int c = 0; c < matrix[0].length; c++) {
//             List<Integer> temp = new ArrayList<>();

//             for (int r = 0; r < matrix.length; r++) {
//                 temp.add(matrix[r][c]);
//             }

//             resList.add(temp);
//         }

//         // Convert List<List<Integer>> to int[][]
//         int[][] res = new int[resList.size()][];
//         for (int i = 0; i < resList.size(); i++) {
//             List<Integer> row = resList.get(i);
//             res[i] = row.stream().mapToInt(Integer::intValue).toArray();
//         }

//         return res;        
//     }
// }