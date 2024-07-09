import java.util.Scanner;

public class s749244504 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int[][] C = new int[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                C[i][j] = sc.nextInt();
            }
        }
        int[][] A = new int[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                A[i][j] = sc.nextInt();
            }
        }
        
        int[][] G = new int[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                G[i][j] = C[i][j];
            }
        }
        
        int[] d = new int[10];
        for (int i = 0; i < 10; i++) {
            if (i == 1) {
                continue;
            }
            d[i] = shortestPathLength(G, i, 1);
        }
        
        int s = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                int a = A[i][j];
                if (a == -1 || a == 1) {
                    continue;
                }
                s += d[a];
            }
        }
        
        System.out.println(s);
    }
    
    static int shortestPathLength(int[][] G, int start, int end) {
        int INF = Integer.MAX_VALUE / 2;
        int n = G.length;
        int[][] dist = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (G[i][j] == 0) {
                    dist[i][j] = INF;
                } else {
                    dist[i][j] = G[i][j];
                }
            }
        }
        
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    dist[i][j] = Math.min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        
        return dist[start][end];
    }
}