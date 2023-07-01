public class Append {
    public static void main(String args[])
    {
       StringBuilder op = new StringBuilder("h");
       op.append("e");
       op.append("l");
       op.append("l");
       op.append("o");
       op.append("w");
       System.out.println(op);
       System.out.println("Hellow  length : "+op.length());
    }
}
