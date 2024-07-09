import java.util.*;

public class s772335512 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] g = new int[n][n];
        int[] used = new int[n];
        int[] grundy = new int[n];
        for (int i = 0; i < n - 1; i++) {
            int x = sc.nextInt() - 1;
            int y = sc.nextInt() - 1;
            g[x][y] = 1;
            g[y][x] = 1;
        }
        dfs(g, used, grundy, 0);
        if (grundy[0] != 0) {
            System.out.println("Alice");
        } else {
            System.out.println("Bob");
        }
    }

    public static void dfs(int[][] g, int[] used, int[] grundy, int v) {
        used[v] = 1;
        grundy[v] = 0;
        for (int i = 0; i < g.length; i++) {
            if (g[v][i] == 1 && used[i] == 0) {
                dfs(g, used, grundy, i);
                grundy[v] ^= (grundy[i] + 1);
            }
        }
    }
}