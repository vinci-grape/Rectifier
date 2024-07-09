import java.util.*;

public class atcoder_AGC004_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int x = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[][] b = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = Integer.MAX_VALUE;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int m = a[i];
                for (int k = 0; k < n; k++) {
                    if (k < 0) {
                        k += n;
                    }
                    m = Math.min(m, a[k]);
                    b[i][j] = Math.min(b[i][j], m + x * (i - j));
                }
            }
        }
        int m = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                m = Math.min(m, b[i][j]);
            }
        }
        System.out.println(m);
    }
}