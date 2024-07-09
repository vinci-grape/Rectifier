import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.List;
import java.util.Scanner;

public class s951169509 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int H = in.nextInt();
        int W = in.nextInt();
        List<String> G = new ArrayList<>();
        for (int i = 0; i < H; i++) {
            G.add(in.next());
        }
        int ans = 0;
        for (int sx = 0; sx < W; sx++) {
            for (int sy = 0; sy < H; sy++) {
                if (G.get(sy).charAt(sx) == '.') {
                    int[][] dist = new int[H + 2][W + 2];
                    boolean[][] visited = new boolean[H + 2][W + 2];
                    Deque<int[]> q = new ArrayDeque<>();
                    q.add(new int[]{sx, sy});
                    dist[sy][sx] = 0;
                    visited[sy][sx] = true;
                    while (!q.isEmpty()) {
                        int[] curr = q.remove();
                        if (G.get(curr[1]).charAt(curr[0] + 1) == '.' &&!visited[curr[1] + 1][curr[0] + 1]) {
                            q.add(new int[]{curr[0] + 1, curr[1]});
                            dist[curr[1] + 1][curr[0] + 1] = dist[curr[1]][curr[0]] + 1;
                            visited[curr[1] + 1][curr[0] + 1] = true;
                        }
                        if (G.get(curr[1]).charAt(curr[0] - 1) == '.' &&!visited[curr[1] - 1][curr[0] - 1]) {
                            q.add(new int[]{curr[0] - 1, curr[1]});
                            dist[curr[1] - 1][curr[0] - 1] = dist[curr[1]][curr[0]] + 1;
                            visited[curr[1] - 1][curr[0] - 1] = true;
                        }
                        if (G.get(curr[1] + 1).charAt(curr[0]) == '.' &&!visited[curr[1] + 1][curr[0]]) {
                            q.add(new int[]{curr[0], curr[1] + 1});
                            dist[curr[1] + 1][curr[0]] = dist[curr[1]][curr[0]] + 1;
                            visited[curr[1] + 1][curr[0]] = true;
                        }
                        if (G.get(curr[1] - 1).charAt(curr[0]) == '.' &&!visited[curr[1] - 1][curr[0]]) {
                            q.add(new int[]{curr[0], curr[1] - 1});
                            dist[curr[1] - 1][curr[0]] = dist[curr[1]][curr[0]] + 1;
                            visited[curr[1] - 1][curr[0]] = true;
                        }
                    }
                    for (int i = 0; i < W + 2; i++) {
                        for (int j = 0; j < H + 2; j++) {
                            ans = Math.max(ans, dist[j][i]);
                        }
                    }
                }
            }
        }
        System.out.println(ans);
    }
}