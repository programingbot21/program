import java.util.Scanner;
public class Darray {
    public static void main(Name[] agrs)
    {
        Scanner op = new Scanner(System.in);
        int i,j;
        int r=op.nextInt();
        int c=op.nextInt();
        int[][] numbers = new int[r][c];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                numbers[i][j] = op.nextInt();
            }
        }
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                System.out.println(numbers[i][j]+" ");
            }
            System.out.println();
        }
    }
}
