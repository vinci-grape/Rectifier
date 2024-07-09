import java.util.*;
import java.io.*;
import java.math.*;

public class s285212630 {
    static int N;
    static int[][] G;
    static int[][] U;
    static int[] R;
    static long[] L;
    static int MAX_L = 22;
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        N = cin.nextInt();
        G = new int[N][N];
        U = new int[MAX_L][N];
        R = new int[N];
        L = new long[N];
        for (int i=0; i<N; i++) {
            for (int j=0; j<N; j++) {
                G[i][j] = INF;
            }
        }
        for (int i=0; i<N-1; i++) {
            int a = cin.nextInt()-1, b = cin.nextInt()-1, c = cin.nextInt();
            G[a][b] = c;
            G[b][a] = c;
        }
        for (int i=0; i<MAX_L; i++) {
            for (int j=0; j<N; j++) {
                U[i][j] = -1;
            }
        }
        dfs(0, -1, 0, 0);
        for (int i=0; i<MAX_L-1; i++) {
            for (int v=0; v<N; v++) {
                if (U[i][v] == -1) U[i+1][v] = -1;
                U[i+1][v] = U[i][U[i][v]];
            }
        }
        int Q = cin.nextInt(), K = cin.nextInt()-1;
        for (int i=0; i<Q; i++) {
            int x = cin.nextInt()-1, y = cin.nextInt()-1;
            System.out.println(dist(x, K) + dist(K, y));
        }
    }
    static void dfs(int x, int p, int r, long l) {
        U[0][x] = p;
        R[x] = r;
        L[x] = l;
        for (int t=0; t<N; t++) {
            if (G[x][t] == INF) continue;
            if (t == p) continue;
            dfs(t, x, r+1, l+G[x][t]);
        }
    }
    static int lca(int a, int b) {
        if (R[a] > R[b]) swap(a, b);
        for (int k=0; k<MAX_L; k++) {
            if ((R[a] - R[b]) >> k & 1) b = U[k][b];
        }
        if (a == b) return a;
        for (int k=MAX_L-1; k>=0; k--) {
            if (U[k][a]!= U[k][b]) {
                a = U[k][a];
                b = U[k][b];
            }
        }
        return U[0][a];
    }
    static long dist(int x, int y) {
        int g = lca(x, y);
        return L[x] + L[y] - 2LL*L[g];
    }
}