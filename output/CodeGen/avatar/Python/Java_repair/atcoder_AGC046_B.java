import java.util.*;

public class atcoder_AGC046_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] d = new int[10];
        d[0] = 1;
        for (int i = 1; i < 10; i++) {
            d[i] = d[i - 1] * i;
        }
        int A = 0, B = 0, C = 998244353, D = 998244353;
        int m = 998244353;
        int[][] ds = new int[C + 1][D + 1];
        ds[A][B] = 1;
        for (int i = A; i <= C; i++) {
            for (int j = B; j <= D; j++) {
                ds[i][j] += ((ds[i][j - 1] * i + ds[i - 1][j] * j - ds[i - 1][j - 1] * (i - 1) * (j - 1)) % m + m % m) % m;
            }
        }
        System.out.println(ds[C][D]);
    }
}