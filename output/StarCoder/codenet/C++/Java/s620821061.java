import java.util.ArrayList;
import java.util.List;

public class s620821061 {
    public static void main(String[] args) {
        while (true) {
            int n, m;
            try {
                n = Integer.parseInt(System.console().readLine());
                m = Integer.parseInt(System.console().readLine());
            } catch (Exception e) {
                break;
            }
            if (n == 0) break;
            List<Integer>[] G = new List[2*n];
            for (int i = 0; i < 2*n; i++) {
                G[i] = new ArrayList<>();
            }
            int[] match = new int[2*n];
            for (int i = 0; i < 2*n; i++) {
                match[i] = -1;
            }
            int[] used = new int[2*n];
            for (int i = 0; i < n; i++) {
                int a;
                try {
                    a = Integer.parseInt(System.console().readLine());
                } catch (Exception e) {
                    break;
                }
                for (int j = 0; j < m; j++) {
                    if (gcd(a, b[j])!= 1) {
                        G[i].add(j+n);
                        G[j+n].add(i);
                    }
                }
            }
            int res = 0;
            for (int v = 0; v < n; v++) {
                if (match[v] < 0) {
                    for (int i = 0; i < 2*n; i++) {
                        used[i] = 0;
                    }
                    if (dfs(G, match, used, v)) {
                        res++;
                    }
                }
            }
            System.out.println(res);
        }
    }

    private static boolean dfs(List<Integer>[] G, int[] match, int[] used, int v) {
        used[v] = 1;
        for (int i = 0; i < G[v].size(); i++) {
            int u = G[v].get(i), w = match[u];
            if (w < 0 || (!used[w] && dfs(G, match, used, w))) {
                match[v] = u;
                match[u] = v;
                return true;
            }
        }
        return false;
    }

    private static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a%b);
    }
}