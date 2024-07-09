public class s612033342 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int h = in.nextInt();
    int w = in.nextInt();
    int k = in.nextInt();
    int[][] hw = new int[h][w];
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        hw[i][j] = in.nextInt();
      }
    }
    int sum = 0;
    for (int i = 0; i < pow2(h); i++) {
      for (int j = 0; j < pow2(w); j++) {
        if (count(hw, i, j) == k) sum++;
      }
    }
    System.out.println(sum);
  }
}