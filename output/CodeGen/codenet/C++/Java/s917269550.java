public class s917269550 {
  public static void main(String[] args) {
    long x, y;
    Scanner in = new Scanner(System.in);
    x = in.nextLong();
    y = in.nextLong();
    if (Math.abs(x - y) <= 1) System.out.println("Brown");
    else System.out.println("Alice");
  }
}