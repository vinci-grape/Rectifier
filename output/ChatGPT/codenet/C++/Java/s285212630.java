import java.util.*;
import java.io.*;

public class s285212630 {
    static int N;
    static List<Pair<Integer, Integer>>[] G;
    static int[][] U;
    static int[] R;
    static long[] L;
    static final int MAX_L = 22;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        G = new ArrayList[N];
        for (int i = 0; i < N; i++) {
            G[i] = new ArrayList<>();
        }
        for (int i = 0; i < N - 1; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken()) - 1;
            int b = Integer.parseInt(st.nextToken()) - 1;
            int c = Integer.parseInt(st.nextToken());
            G[a].add(new Pair<>(b, c));
            G[b].add(new Pair<>(a, c));
        }
        U = new int[MAX_L][N];
        R = new int[N];
        L = new long[N];
        dfs(0, -1, 0, 0);
        for (int i = 0; i < MAX_L - 1; i++) {
            for (int v = 0; v < N; v++) {
                if (U[i][v] == -1) U[i + 1][v] = -1;
                U[i + 1][v] = U[i][U[i][v]];
            }
        }
        int Q, K;
        StringTokenizer st = new StringTokenizer(br.readLine());
        Q = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken()) - 1;
        for (int i = 0; i < Q; i++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken()) - 1;
            int y = Integer.parseInt(st.nextToken()) - 1;
            System.out.println(dist(x, K) + dist(K, y));
        }
    }

    static void dfs(int x, int p, int r, long l) {
        U[0][x] = p;
        R[x] = r;
        L[x] = l;
        for (Pair<Integer, Integer> pp : G[x]) {
            int t = pp.getKey();
            if (t == p) continue;
            dfs(t, x, r + 1, l + pp.getValue());
        }
    }

    static int lca(int a, int b) {
        if (R[a] > R[b]) {
            int temp = a;
            a = b;
            b = temp;
        }
        for (int k = 0; k < MAX_L; k++) {
            if (((R[b] - R[a]) >> k) & 1 == 1) b = U[k][b];
        }
        if (a == b) return a;
        for (int k = MAX_L - 1; k >= 0; k--) {
            if (U[k][a] != U[k][b]) {
                a = U[k][a];
                b = U[k][b];
            }
        }
        return U[0][a];
    }

    static long dist(int x, int y) {
        int g = lca(x, y);
        return L[x] + L[y] - 2L * L[g];
    }
}

class Pair<K, V> {
    private K key;
    private V value;

    public Pair(K key, V value) {
        this.key = key;
        this.value = value;
    }

    public K getKey() {
        return key;
    }

    public V getValue() {
        return value;
    }
}