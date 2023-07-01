import java.util.Scanner;
public class Discount {
    public static void main(Name[] args)
    {
        int  r,d,tp,a;
        Scanner op = new Scanner(System.in);
        System.out.println("Enter the Rate \n");
        r=op.nextInt();
        System.out.println("Enter the Discount ");
        d=op.nextInt();
        tp=r-(d*r/100);
        a=r-tp;
        System.out.println("Discount Rate "+a);
        System.out.println("Pay bill "+tp);
    }
    
}
