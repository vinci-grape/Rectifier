import java.util.*;

public class s615507008 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] T = new int[N];
        for (int i = 0; i < N; i++) {
            T[i] = sc.nextInt();
        }
        int M = sc.nextInt();
        int[] P = new int[M];
        int[] X = new int[M];
        for (int i = 0; i < M; i++) {
            P[i] = sc.nextInt();
            X[i] = sc.nextInt();
        }
        solve(N, T, M, P, X);
    }

    public static void solve(int N, int[] T, int M, int[] P, int[] X) {
        for (int i = 0; i < M; i++) {
            int ans = 0;
            for (int j = 0; j < N; j++) {
                if (j == P[i] - 1) ans += X[i];
                else ans += T[j];
            }
            System.out.println(ans);
        }
    }
}