import java.util.*;

public class atcoder_AGC011_C {
    static int n, m;
    static int[] vis, g;
    static int ci, cb, cc;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        m = input.nextInt();
        vis = new int[n + 1];
        g = new int[n + 1];
        ci = 0;
        cb = 0;
        cc = 0;

        for (int i = 0; i < m; i++) {
            int u = input.nextInt();
            int v = input.nextInt();
            g[u].add(v);
            g[v].add(u);
        }

        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                if (g[i].size() == 0) {
                    ci += 1;
                } else {
                    if (dfs(i)) {
                        cb += 1;
                    } else {
                        cc += 1;
                    }
                }
            }
        }

        int result = ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb;
        System.out.println(result);
    }

    public static boolean dfs(int x) {
        Stack<Pair<Integer, Integer>> stk = new Stack<>();
        boolean flag = true;
        stk.push(new Pair<>(x, 1));

        while (!stk.isEmpty()) {
            Pair<Integer, Integer> pair = stk.pop();
            int u = pair.getKey();
            int col = pair.getValue();

            if (vis[u] != 0) {
                flag &= (vis[u] == col);
                continue;
            }

            vis[u] = col;

            for (int i = 0; i < g[u].size(); i++) {
                stk.push(new Pair<>(g[u].get(i), 3 - col));
            }
        }

        return flag;
    }
}