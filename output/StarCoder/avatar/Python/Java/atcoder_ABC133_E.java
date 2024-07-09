import java.util.*;

public class atcoder_ABC133_E {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[][] graph = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                graph[i][j] = 0;
            }
        }
        for (int i = 0; i < N - 1; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        int mod = 1000000007;
        int ans = dfs(0, -1, K, graph, mod);
        System.out.println(ans);
    }

    public static int dfs(int fro, int to, int f, int[][] graph, int mod) {
        int caseNum = f;
        int colorNum = K - 1;
        if (f == K) {
            colorNum = K - 2;
        }
        for (int u = 0; u < graph[fro].length; u++) {
            if (graph[fro][u] == 0) {
                continue;
            }
            if (u == to) {
                continue;
            }
            int pat = dfs(u, fro, colorNum, graph, mod);
            if (pat == 0) {
                caseNum = 0;
                break;
            }
            caseNum = (caseNum * pat) % mod;
            colorNum--;
        }
        return caseNum;
    }
}