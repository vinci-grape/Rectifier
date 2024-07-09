import java.util.Scanner;

public class s951169509 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int H = sc.nextInt();
        int W = sc.nextInt();
        String[][] G = new String[H + 2][W + 2];
        for (int i = 0; i < H + 2; i++) {
            G[i][0] = G[i][W + 1] = '#';
            for (int j = 1; j < W + 1; j++) {
                G[i][j] = sc.next();
            }
        }
        int ans = 0;
        for (int sx = 0; sx < W + 2; sx++) {
            for (int sy = 0; sy < H + 2; sy++) {
                if (G[sy][sx] == '.') {
                    int[][] dist = new int[H + 2][W + 2];
                    int[][] visited = new int[H + 2][W + 2];
                    for (int i = 0; i < H + 2; i++) {
                        for (int j = 0; j < W + 2; j++) {
                            dist[i][j] = -1;
                            visited[i][j] = -1;
                        }
                    }
                    dist[sy][sx] = 0;
                    visited[sy][sx] = 1;
                    Queue<int[]> q = new LinkedList<>();
                    q.add(new int[]{sx, sy});
                    while (!q.isEmpty()) {
                        int[] cur = q.poll();
                        int x = cur[0], y = cur[1];
                        if (G[y][x + 1] == '.' && visited[y][x + 1] == -1) {
                            q.add(new int[]{x + 1, y});
                            dist[y][x + 1] = dist[y][x] + 1;
                            visited[y][x + 1] = 1;
                        }
                        if (G[y][x - 1] == '.' && visited[y][x - 1] == -1) {
                            q.add(new int[]{x - 1, y});
                            dist[y][x - 1] = dist[y][x] + 1;
                            visited[y][x - 1] = 1;
                        }
                        if (G[y + 1][x] == '.' && visited[y + 1][x] == -1) {
                            q.add(new int[]{x, y + 1});
                            dist[y + 1][x] = dist[y][x] + 1;
                            visited[y + 1][x] = 1;
                        }
                        if (G[y - 1][x] == '.' && visited[y - 1][x] == -1) {
                            q.add(new int[]{x, y - 1});
                            dist[y - 1][x] = dist[y][x] + 1;
                            visited[y - 1][x] = 1;
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