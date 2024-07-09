import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class s582643375 {
  public static void main(String[] args) throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    StringTokenizer st = new StringTokenizer(br.readLine());
    int X = Integer.parseInt(st.nextToken());
    int Y = Integer.parseInt(st.nextToken());
    if((X+Y) % 3 != 0) {
      System.out.println(0);
      return;
    }
    int n = (X+Y) / 3+1;
    int k = 2*(n-1) - Y + 1; // y = 2xより最も上にくる点からどれだけ離れているか。
    System.out.println(C(n-1, k-1));
  }

  public static long C(int n, int k) {
    if(n < k) return 0;
    if(n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n-k] % mod) % mod;
  }

  static final int mod = 1000000007;
  static long[] fac = new long[1000010];
  static long[] finv = new long[1000010];
  static long[] inv = new long[1000010];

  static {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i = 2; i < 1000010; i++) {
      fac[i] = fac[i-1] * i % mod;
      inv[i] = mod - inv[mod%i] * (mod/i) % mod;
      finv[i] = finv[i-1] * inv[i] % mod;
    }
  }
}