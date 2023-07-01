import java.time.Instant;
import java.util.Scanner;
import java.time.Duration;
public class RoCodiff 
    {
        Scanner op = new Scanner(System.in);
        int r =op.nextInt();
        int c = op.nextInt();
        static int Max = 10000;
        static int[][] arr = new int[Max][Max];
        static void rowMajor()
        {
           int i, j;
           for(i=0; i<Max; i++)
           {
            for(j=0; j<Max; j++)
            {
            arr[i][j]++;
            }
           }
        }
         static void colMajor()
         {
            int i,j;
            for(i=0; i<Max; i++)
            {
                for(j=0; j<Max; j++)
                {
                    arr[i][j]++;
                }
            }
         } 
         public static void main(Name[] args) {
          Instant start = Instant.now();
          rowMajor(); 
          Instant  end =  Instant.now();
          rowMajor();
          System.out.println("Row major acces time : "+Duration.between(start,end));

          start = Instant.now();
          colMajor();
          end   =  Instant.now();
          colMajor();
          System.out.println("Coloum major acces time : "+Duration.between(start,end));
         }
    }

