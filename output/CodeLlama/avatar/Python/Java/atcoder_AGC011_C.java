import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;
public class atcoder_AGC011_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] vis = new int[n + 1];
        int ci = 0, cb = 0, cc = 0;
        LinkedList<Integer>[] g = new LinkedList[n + 1];
        for (int i = 0; i <= n; i++) {
            g[i] = new LinkedList<>();
        }
        for (int i = 0; i < m; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            g[u].add(v);
            g[v].add(u);
        }
        for (int i = 1; i <= n; i++) {
            if (vis[i] == 0) {
                if (g[i].size() == 0) {
                    ci++;
                } else {
                    if (dfs(i)) {
                        cb++;
                    } else {
                        cc++;
                    }
                }
            }
        }
        System.out.println(ci * ci + 2 * ci * (n - ci) + cc * cc + 2 * cb * cc + 2 * cb * cb);
    }
    public static boolean dfs(int x) {
        Queue<Integer> stk = new LinkedList<>();
        stk.add(x);
        boolean flag = true;
        while (!stk.isEmpty()) {
            int u = stk.poll();
            if (vis[u] != 0) {
                flag &= (vis[u] == 1);
                continue;
            }
            vis[u] = 1;
            for (int i : g[u]) {
                stk.add(i);
            }
        }
        return flag;
    }
}