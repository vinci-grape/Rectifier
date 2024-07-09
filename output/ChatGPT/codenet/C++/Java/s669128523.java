import java.util.Scanner;

public class s669128523 {
    private static final int N = 100;
    private static final int WHITE = 0;
    private static final int GRAY = 1;
    private static final int BLACK = 2;

    private static int[][] M = new int[N][N];
    private static int[] color = new int[N];
    private static int[] d = new int[N];
    private static int[] f = new int[N];
    private static int tt;

    private static void dfs_visit(int u) {
        int v;
        color[u] = GRAY;
        d[u] = ++tt;
        for (v = 0; v < N; v++) {
            if (M[u][v] == 0)
                continue;
            if (color[v] == WHITE) {
                dfs_visit(v);
            }
        }
        color[u] = BLACK;
        f[u] = ++tt;
    }

    private static void dfs() {
        int u;
        for (int i = 0; i < N; i++) {
            color[i] = WHITE;
        }
        tt = 0;

        for (u = 0; u < N; u++) {
            if (color[u] == WHITE)
                dfs_visit(u);
        }

        for (int i = 0; i < N; i++)
            System.out.println((i + 1) + " " + d[i] + " " + f[i]);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                M[i][j] = 0;
        }
        for (int i = 0; i < n; i++) {
            int u = input.nextInt() - 1;
            int k = input.nextInt();
            for (int j = 0; j < k; j++) {
                int v = input.nextInt() - 1;
                M[u][v] = 1;
            }
        }

        dfs();
    }
}