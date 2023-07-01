import java.util.Scanner;

public class TS {
    public static void main(String args[])
    {
        Scanner op = new Scanner (System.in);
        String name = op.nextLine();
        System.out.println("Your name is : "+name); 
        System.out.println("Name length : "+name.length());
        for(int i=0; i<=name.length(); i++)
        {
            System.out.println(name.charAt(i));
        }
    }
    
}
