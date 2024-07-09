public class s582643375 {
  public static void main(String[] args) {
    int X, Y;
    Scanner sc = new Scanner(System.in);
    sc.nextInt();
    sc.nextInt();
    if((X+Y) % 3!= 0) {
      System.out.println(0);
      return;
    }
    int n = (X+Y) / 3+1;
    int k = 2*(n-1) - Y + 1; // y = 2xより最も上にくる点からどれだけ離れているか。
    System.out.println(C(n-1, k-1));
  }
}