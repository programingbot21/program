import java.util.Scanner;
public class TwoArray {
    public static void main(Name[] args)
    {
        int i;
     Scanner op = new Scanner(System.in);
     int size = op.nextInt();
     int numbers[] = new int[size];
     for(i=0; i<size; i++) 
     {
        numbers[i]=op.nextInt();
     }
     for( i=0; i<size; i++)
     {
        System.out.println(numbers[i]);
     }
    }
}
