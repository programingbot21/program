import java.util.Scanner;
public class calculater {
public static void main(Name[] args) {
      Scanner sc = new Scanner(System.in);
       int first, Second,operator,result;
       System.out.println("Enter the First value ");
       first=sc.nextInt();
       System.out.println("Enter the Second value");
       Second=sc.nextInt();
       System.out.println("Enter the opertaor ");
       operator=sc.nextInt();
       switch(operator)
       {
           case 1:
               result = first+Second;
               System.out.println("Add = "+result);
               break;
           case 2:
               result= first-Second;
               System.out.println("Sub = "+result);
               break;
           case 3:
               result= first*Second;
               System.out.println("Mul = "+result);
               break;
           case 4:
               result= first/Second;
               System.out.println("div = "+result);
               break;
       }
             
    }
}
