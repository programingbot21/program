import java.util.Scanner;
public class pattern{
//import java.util.Scanner;

    public static void main(Name[] args) {
          int i,j,n,m,k;
          Scanner op = new Scanner(System.in);
          System.out.println("Enter the Value");
          n=op.nextInt();
        //m=op.nextInt();
          for(i=0; i<n; i++)
        {
         //for(j=0; j<=i; j++)
            for(j=n-i; j>0; j--)
            {
                
                System.out.print(" ");
            
            }
            for(j=0; j<=i; j++){
           // for(j=n-i; j>1; j--){
   
            System.out.print("* ");
            }
            System.out.println();
            
        }
    }
}     