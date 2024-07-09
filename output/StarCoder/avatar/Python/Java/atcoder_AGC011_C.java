import java.util.Scanner;

public class atcoder_AGC011_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] vis = new int[n + 1];
        int ci = 0, cb = 0, cc = 0;
        int[] g = new int[n + 1][];
        for (int i = 0; i < m; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            if (g[u] == null) {
                g[u] = new int[1];
                g[u][0] = v;
            } else {
                int[] temp = new int[g[u].length + 1];
                for (int j = 0; j < g[u].length; j++) {
                    temp[j] = g[u][j];
                }
                temp[g[u].length] = v;
                g[u] = temp;
            }
            if (g[v] == null) {
                g[v] = new int[1];
                g[v][0] = u;
            } else {
                int[] temp = new int[g[v].length + 1];
                for (int j = 0; j < g[v].length; j++) {
                    temp[j] = g[v][j];
                }
                temp[g[v].length] = u;
                g[v] = temp;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                if (g[i] == null) {
                    ci++;
                } else {
                    boolean flag = true;
                    for (int j = 0; j < g[i].length; j++) {
                        if (vis[g[i][j]] == 0) {
                            flag &= dfs(g[i][j], 1);
                        } else {
                            flag &= (vis[g[i][j]] == 1);
                        }
                    }
                    if (flag) {
                        cb++;
                    } else {
                        cc++;
                    }
                }
            }
        }
        System.out.println(ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb);
    }

    public static boolean dfs(int u, int col) {
        boolean flag = true;
        vis[u] = col;
        for (int i = 0; i < g[u].length; i++) {
            if (vis[g[u][i]] == 0) {
                flag &= dfs(g[u][i], 3 - col);
            } else {
                flag &= (vis[g[u][i]] == 3 - col);
            }
        }
        return flag;
    }
}