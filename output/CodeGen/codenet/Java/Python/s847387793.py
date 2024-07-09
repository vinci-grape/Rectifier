class Main {

  static class Solver {
    final FastScanner sc;
    final PrintWriter writer;

    Solver(final FastScanner sc, final PrintWriter writer) {
      this.sc = sc;
      this.writer = writer;
    }

    int n, m, q;
    int max = 0;
    int[] a, b, c, d;

    void run() {
      n = sc.nextInt();
      m = sc.nextInt();
      q = sc.nextInt();
      a = new int[q];
      b = new int[q];
      c = new int[q];
      d = new int[q];
      for (int i = 0; i < q; i++) {
        a[i] = sc.nextInt();
        b[i] = sc.nextInt();
        c[i] = sc.nextInt();
        d[i] = sc.nextInt();
      }
      dfs(new int[] { 1 });
      writer.println(max);
    }

    private void dfs(int[] array) {
      if (array.length > n) {
        int score = 0;
        for (int i = 0; i < q; i++) {
          if (array[b[i]] - array[a[i]] == c[i]) {
            score += d[i];
          }
        }
        max = Math.max(max, score);
        return;
      }

      // Append an item to the existing array
      int[] newArray = new int[array.length + 1];
      System.arraycopy(array, 0, newArray, 0, array.length);
      System.arraycopy(new int[] { array[array.length - 1] }, 0, newArray, array.length, 1);

      while (newArray[newArray.length - 1] <= m) {
        dfs(newArray);
        newArray[newArray.length - 1] += 1;
      }
    }
  }

  public static void main(final String[] args) {
    final FastScanner sc = new FastScanner();
    try (final PrintWriter w = new PrintWriter(System.out)) {
      new Solver(sc, w).run();
      w.flush();
    }
  }

  // FastScanner
  static class FastScanner {
    private final InputStream in = System.in;
    private final byte[] buffer = new byte[1024];
    private int ptr = 0;
    private int buflen = 0;

    public FastScanner() {
    }

    private boolean hasNextByte() {
      if (ptr < buflen) {
        return true;
      } else {
        ptr = 0;
        try {
          buflen = in.read(buffer);