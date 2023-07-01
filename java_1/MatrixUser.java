import java.util.Scanner;
public class MatrixUser {
    public static void main(Name[] args)
    {
        int a[][] = new int [2][2];
        int b[][] = new int [2][2];
        int c[][] = new int [2][2];
        Scanner r= new Scanner(System.in);
        System.out.println("Enter First matrix Data");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                a[i][j]=r.nextInt();
            }
        }
        System.out.println("Enter Second matrix Data");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                b[i][j]=r.nextInt();
            }
        }
        System.out.println("First Matrix \n");
        for(int i=0; i<2;  i++)
        {
            for(int j=0; j<2; j++)
            {
                System.out.println(a[i][j]+" ");
            }
            System.out.println("\n");
        }
        System.out.println("Second Matrix \n");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                System.out.println(b[i][j]+" ");
            }
            System.out.println("\n");
        }
        System.out.println("Sum of Two Matrix \n");
        for(int i=0; i<2;  i++)
        {
            for(int j=0; j<2; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                System.out.println(c[i][j]+" ");
            }
            System.out.println("\n");
        }
    }
}
