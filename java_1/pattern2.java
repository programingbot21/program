import java.util.Scanner;
public class pattern2 {

    public static void main(Name[] args) {
        int i,j,n;
        Scanner op= new Scanner(System.in);
        System.out.println("Enter the Value ");
        n=op.nextInt();
        for(i=0; i<n; i++)
        {
            //for(j=n-i; j>1; j--)
                for(j=0; j<=i; j++)
            {
                System.out.print(" ");
            }
          //  for(j=0; j<=i; j++)
                for(j=n-i; j>0; j--)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
