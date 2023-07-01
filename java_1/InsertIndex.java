public class InsertIndex {
    public static void main(String args[])
    {
      StringBuilder op = new StringBuilder("Banglore");
      System.out.println(op);
      op.insert(4,'s');
      System.out.println(op);
      op.insert(2, 'n');
      System.out.println(op);
      op.delete(2,3);
      System.out.println(op);
    }
}
