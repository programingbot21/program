public class Reverse {
    public static void main(String args[])
    {
        StringBuilder op = new StringBuilder("Kunal");
        for(int i=0; i<=op.length()/2; i++)
        {
          int front = i;
          int back =  op.length()-1-i;

          char frontChar =op.charAt(front);
          char backChar = op.charAt(back);

          op.setCharAt(front, backChar);
          op.setCharAt(back, frontChar);

          System.out.println(op);
        }
    }
}
