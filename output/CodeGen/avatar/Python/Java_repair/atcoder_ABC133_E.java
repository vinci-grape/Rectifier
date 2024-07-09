import java.util.*;

public class atcoder_ABC133_E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt() == 0? 1 : scanner.nextInt();
        int[][] graph = new int[N][K];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < K; j++) {
                graph[i][j] = M[i][j];
            }
        }
        int mod = 1000000007;
        int[] dfs = new int[N];
        for (int i = 0; i < N; i++) {
            dfs[i] = K - 1;
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < K; j++) {
                if (dfs[i] == K - 1) {
                    continue;
                }
                for (int k = 0; k < K; k++) {
                    if (graph[i][k] == j) {
                        dfs[k] = K - 1;
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < K; i++) {
            if (dfs[i] == K - 1) {
                ans++;
            }
        }
        System.out.println(ans % mod);
    }
}