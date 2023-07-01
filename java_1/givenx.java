import java.util.Scanner;
public class givenx {
  public static void main(Name[] args)
  {
    int i,j;
    Scanner op = new Scanner(System.in);
    int r=op.nextInt();
    int c=op.nextInt();
    int[][] numbers = new int [r][c];
    for(i=0; i<r; i++)
    {
      for(j=0; j<c; j++)
      {
        numbers[i][j] = op.nextInt();
      }
    }
    int x = op.nextInt();
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(numbers[i][j]==x)
            {
                System.out.println("x found at location("+ i +", " + j +")");
            }
        }
    }
  }   
}
