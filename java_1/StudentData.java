import java.util.Scanner;
public class StudentData {
    public static void main(Name[] args) {
       Name name;
       int roll_no;
       float phy,chem,math,avg;
       
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter Name");
       name=sc.nextLine();
       System.out.println("Enter Roll no");
       roll_no =sc.nextInt();
       System.out.println("Phy marks ");
       phy = sc.nextFloat();
       System.out.println("chem marks ");
       chem = sc.nextFloat();
       System.out.println("Math marks ");
       math = sc.nextFloat();
       float total = phy+math+chem;
       avg=(float)total/300*100;
       System.out.println("Name ="+name);
       System.out.println("Roll no"+roll_no);
       System.out.println("Phy ="+phy);
       System.out.println("Chem ="+chem);
       System.out.println("Math ="+math);
       System.out.println("Avg ="+avg);
    }
}