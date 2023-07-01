import java.util.Scanner;
public class Arr {
    public static void main(Name[] args)
    {
        int i,x;
      Scanner op = new Scanner(System.in);
      int size = op.nextInt();
      int numbers[] = new int[size];
      for(i=0; i<size; i++)
      {
        numbers[i]=op.nextInt();
      }
      x=op.nextInt();
      for(i=0; i<numbers.length; i++)
      {
        if(numbers[i]==x)
        {
            System.out.println("X found index : "+i);
        }
      }
    }
    
}
