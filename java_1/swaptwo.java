import java.util.Scanner;
public class swaptwo {
    public static void main(Name[] args)
    {
       int a,b;
       Scanner op = new Scanner(System.in);
       System.out.println("Enter the number ");
       a=op.nextInt();
       b=op.nextInt();
       b=(a+b)-(a=b);
       System.out.println("Swap value A :"+a);
        System.out.println("Swap value B :"+b);
    }
    
}
