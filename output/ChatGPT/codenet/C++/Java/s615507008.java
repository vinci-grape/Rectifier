import java.util.Scanner;

public class s615507008 {
    public static void solve(long N, long[] T, long M, long[] P, long[] X) {
        for (int i = 0; i < M; i++) {
            long ans = 0;
            for (int j = 0; j < N; j++) {
                if (j == P[i] - 1) ans += X[i];
                else ans += T[j];
            }
            System.out.println(ans);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long N = scanner.nextLong();
        long[] T = new long[(int)N];
        for (int i = 0; i < N; i++) {
            T[i] = scanner.nextLong();
        }
        long M = scanner.nextLong();
        long[] P = new long[(int)M];
        long[] X = new long[(int)M];
        for (int i = 0; i < M; i++) {
            P[i] = scanner.nextLong();
            X[i] = scanner.nextLong();
        }
        solve(N, T, M, P, X);
    }
}