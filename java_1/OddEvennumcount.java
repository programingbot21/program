import java.util.Scanner;
public class OddEvennumcount {
    public static void main(Name[] args)
    {
        int n;
        int even_count=0;
        int odd_count=0;
        Scanner op =new Scanner(System.in);
        n=op.nextInt();
        while(n>0)
        {
            int rem=n%10;
            if(rem%2==0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
            n=n/10;
        }
        System.out.println("Number of Even number : "+even_count);
        System.out.println("Number of odd number : "+odd_count);
    }
    
}
