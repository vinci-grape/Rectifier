import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] g = new int[n][n];
        for (int i = 0; i < n; i++) {
            g[i] = new int[n];
            for (int j = 0; j < n; j++) {
                g[i][j] = in.nextInt();
            }
        }
        int[][] e = new int[n][n];
        for (int i = 0; i < n; i++) {
            e[i] = new int[n];
            for (int j = 0; j < n; j++) {
                e[i][j] = in.nextInt();
            }
        }
        int k = bfs(0, n, g, e);
        System.out.println(k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(e[i][j]);
            }
            System.out.println();
        }
    }
    public static int bfs(int s, int n, int[][] g, int[][] e) {
        int[] visited = new int[n];
        int[] queue = new int[n];
        int[] color = new int[n];
        int k = -1;
        for (int i = 0; i < n; i++) {
            if (visited[i] == 0) {
                queue[0] = i;
                visited[i] = 1;
                color[i] = 1;
                k = 1;
                break;
            }
        }
        while (k >= 0) {
            int q = queue[k];
            k--;
            for (int i = 0; i < g[q].length; i++) {
                int nex = g[q][i];
                if (visited[nex] == 0) {
                    visited[nex] = 1;
                    color[nex] = color[q] + 1;
                    queue[++k] = nex;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (color[i] == n) {
                return n;
            }
        }
        return k;
    }
}