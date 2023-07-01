import java.util.Scanner;

public class EndIndex {
    public static void main(String args[])
    {
       Scanner op = new Scanner(System.in);
       String sen = "banglore college";
       String name = sen.substring(9 , 16);
       System.out.println(name);
       String sentense =" My name is kunal";
       String name1 = sentense.substring(4, 8);
       System.out.println(name1);
    }
}

