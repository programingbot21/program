import java.util.Scanner;
public class calculatetime {
    public static void main(Name[] args)
    {
      float HR, Sec, Min;
      Scanner op = new Scanner(System.in);
      System.out.println("Enter the Value");
      HR=op.nextFloat();
      Sec=op.nextFloat();
      Min=op.nextFloat();
      Min=Min+Sec/60;
      Sec=Sec%60;
      HR=HR+Min/60;
      Min=Min%60;
      System.out.println("Hour "+HR );
      System.out.println("Min "+Min);
      System.out.println("Sec "+Sec);
    }
    
}
