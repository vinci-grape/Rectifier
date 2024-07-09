import java.util.*;
import java.io.*;

public class s285212630 {
    static int N;
    static List<Pair>[] G;
    static int[][] U;
    static int[] R;
    static long[] L;

    static void dfs(int x, int p, int r, long l) {
        U[0][x] = p;
        R[x] = r;
        L[x] = l;
        for (Pair pp : G[x]) {
            int t = pp.x;
            if (t == p) continue;
            dfs(t, x, r+1, l+pp.y);
        }
    }

    static int lca(int a, int b) {
        if (R[a] > R[b]) swap(a, b);
        for (int k=0; k<MAX_L; k++) {
            if ((R[a] - R[b]) >> k & 1) b = U[k][b];
        }
        if (a == b) return a;
        for (int k=MAX_L-1; k>=0; k--) {
            if (U[k][a] != U[k][b]) {
                a = U[k][a];
                b = U[k][b];
            }
        }
        return U[0][a];
    }
    static long dist(int x, int y) {
        int g = lca(x, y);
        return L[x] + L[y] - 2L*L[g];
    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        N = cin.nextInt();
        G = new ArrayList[N];
        for (int i=0; i<N; i++) G[i] = new ArrayList<>();
        U = new int[MAX_L][N];
        R = new int[N];
        L = new long[N];
        for (int i=0; i<MAX_L; i++) Arrays.fill(U[i], -1);
        dfs(0, -1, 0, 0);
        for (int i=0; i<MAX_L-1; i++) {
            for (int v=0; v<N; v++) {
                if (U[i][v] == -1) U[i+1][v] = -1;
                U[i+1][v] = U[i][U[i][v]];
            }
        }
        int Q = cin.nextInt();
        int K = cin.nextInt();
        K--;
        for (int i=0; i<Q; i++) {
            int x = cin.nextInt();
            int y = cin.nextInt();
            x--; y--;
            System.out.println(dist(x, K) + dist(K, y));
        }
    }
}