import java.util.*;
import java.io.*;
public class atcoder_ABC146_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] g = new int[n][n];
        int[][] e = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                g[i][j] = sc.nextInt();
            }
        }
        int k = bfs(g, e, 0, n);
        System.out.println(k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(e[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static int bfs(int[][] g, int[][] e, int v, int n) {
        boolean[] visited = new boolean[n];
        Queue<Integer> queue = new LinkedList<>();
        int k = -1;
        int[] node2color = new int[n];
        queue.add(v);
        visited[v] = true;
        while (!queue.isEmpty()) {
            int q = queue.poll();
            int color = 0;
            for (int nex : g[q]) {
                if (visited[nex]) {
                    continue;
                }
                visited[nex] = true;
                color++;
                if (color == node2color[q]) {
                    color++;
                }
                node2color[nex] = color;
                e[Math.min(q, nex)][Math.max(q, nex)] = color;
                queue.add(nex);
            }
            k = Math.max(k, color);
        }
        return k;
    }
}