import java.util.*;

public class atcoder_AGC046_B {
    public static void main(String[] args) {
        int A, B, C, D;
        Scanner sc = new Scanner(System.in);
        A = sc.nextInt();
        B = sc.nextInt();
        C = sc.nextInt();
        D = sc.nextInt();
        int m = 998244353;
        long[][] d = new long[C+1][D+1];
        d[A][B] = 1;
        for (int i = A; i <= C; i++) {
            for (int j = B; j <= D; j++) {
                d[i][j] += ((d[i][j-1] * i + d[i-1][j] * j - d[i-1][j-1] * (i-1) * (j-1)) % m + m) % m;
            }
        }
        System.out.println(d[C][D]);
    }
}