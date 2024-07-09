import java.util.*;

public class s620821061 {
    static class BitMatching {
        List<Integer> G[] = new ArrayList[2*100000];
        int match[] = new int[2*100000];
        boolean used[] = new boolean[2*100000];

        void init() {
            for (int i = 0; i < 2*100000; i++) {
                G[i] = new ArrayList<>();
            }
        }

        void add(int a, int b) {
            G[a].add(b+100000);
            G[b+100000].add(a);
        }

        boolean dfs(int v) {
            used[v] = true;
            for (int i = 0; i < G[v].size(); i++) {
                int u = G[v].get(i), w = match[u];
                if (w < 0 || (!used[w] && dfs(w))) {
                    match[v] = u;
                    match[u] = v;
                    return true;
                }
            }
            return false;
        }

        int exec() {
            int res = 0;
            Arrays.fill(match, -1);
            for (int v = 0; v < 100000; v++) {
                if (match[v] < 0) {
                    Arrays.fill(used, false);
                    if (dfs(v)) {
                        res++;
                    }
                }
            }
            return res;
        }
    }

    static BitMatching bm = new BitMatching();

    static long gcd(long a, long b) {
        if (b == 0) return a;
        return gcd(b, a%b);
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        while (true) {
            int n = cin.nextInt();
            int m = cin.nextInt();
            if (n == 0) break;
            bm.init();
            int a[] = new int[n];
            int b[] = new int[m];
            for (int i = 0; i < n; i++) {
                a[i] = cin.nextInt();
            }
            for (int i = 0; i < m; i++) {
                b[i] = cin.nextInt();
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (gcd(a[i], b[j]) != 1) {
                        bm.add(i, j);
                    }
                }
            }
            System.out.println(bm.exec());
        }
    }
}