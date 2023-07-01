
public class Matrix {
        public static void main(Name[] args)
        {
           // int row , col;
            int[][] one = new int [][]
            {
                {1, 2, 3},
                {3, 4, 5},
                {5, 6, 7}
            };
            int [][] two = new int [][]
            {
                {  4, 36, 7 },
                { 45, 56, 78},
                { 3, 3, 3   }
            };
            int  row = one.length,col = one[0].length;
            int [][] sum = new int [row][col];
            System.out.println("Sum of two matrix is :");
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++)
                {
                    sum[i][j]= one[i][j]*two[i][j];
                }
            }
            for(int i=0; i<row; i++)
            {
                for(int j=0; j<col; j++)
                {
                    System.out.println("\t"+sum[i][j]);
                }
               System.out.println();
            }
        }
    } 
 
