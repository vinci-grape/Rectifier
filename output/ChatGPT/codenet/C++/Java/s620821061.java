import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

class BitMatching<V> {
    private List<List<Integer>> G;
    private int[] match;
    private boolean[] used;

    BitMatching() {
        this.G = new ArrayList<>();
        this.match = new int[2 * V];
        this.used = new boolean[2 * V];
        for(int i = 0; i < 2 * V; i++) {
            G.add(new ArrayList<>());
        }
    }

    void add(int a, int b) {
        G.get(a).add(b + V);
        G.get(b + V).add(a);
    }

    boolean dfs(int v) {
        used[v] = true;
        for (int i = 0; i < G.get(v).size(); i++) {
            int u = G.get(v).get(i);
            int w = match[u];
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
        for (int v = 0; v < V; v++) {
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

public class s620821061 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (true) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            if (n == 0) break;
            BitMatching<Integer> bm = new BitMatching<>();
            int[] a = new int[n];
            int[] b = new int[m];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < m; i++) {
                b[i] = sc.nextInt();
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

    private static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}