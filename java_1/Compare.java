import java.util.Scanner;

public class Compare {
    public static void main(String args[])
    {
        Scanner op = new Scanner(System.in);
        String name1 = op.nextLine();
        String name2 = op.nextLine();
        System.out.println("First name : "+name1);
        System.out.println("Second name : "+name2);
        if(name1.compareTo(name2)==0)
           System.out.println("String are equal");
           else
           System.out.println("String are not equal");
    }
}
