import java.util.Scanner;

public class s422352362 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        long[] a = new long[200005];
        long[] pre = new long[200005];
        long[] last = new long[200005];
        for (int i = 1; i <= n; i++) {
            a[i] = scanner.nextLong();
        }
        long sumpre = 0, sumlast = 0;
        for (int i = 1; i < n; i++) {
            sumpre += a[i];
            pre[i] = sumpre;
        }
        for (int i = n; i > 1; i--) {
            sumlast += a[i];
            last[i] = sumlast;
        }
        long d = (1L << 60);
        for (int i = 1; i < n; i++) {
            d = Math.min(d, Math.abs(pre[i] - last[i + 1]));
        }
        System.out.println(d);
    }
}