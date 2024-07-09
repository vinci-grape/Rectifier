import java.util.Scanner;
import java.util.Deque;
import java.util.LinkedList;

public class s951169509 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int H = sc.nextInt();
        int W = sc.nextInt();
        int[][] G = new int[H+2][W+2];
        for (int i = 0; i < H+2; i++) {
            if (i == 0 || i == H+1) {
                for (int j = 0; j < W+2; j++) {
                    G[i][j] = 1;
                }
            } else {
                for (int j = 0; j < W+2; j++) {
                    if (sc.next().equals(".")) {
                        G[i][j] = 0;
                    } else {
                        G[i][j] = 1;
                    }
                }
            }
        }

        int ans = 0;
        for (int sx = 0; sx < W+2; sx++) {
            for (int sy = 0; sy < H+2; sy++) {
                if (G[sy][sx] == 0) {
                    int[][] dist = new int[H+2][W+2];
                    int[][] visited = new int[H+2][W+2];
                    Deque<int[]> q = new LinkedList<>();
                    q.add(new int[]{sx, sy});
                    dist[sy][sx] = 0;
                    visited[sy][sx] = 1;
                    while (!q.isEmpty()) {
                        int[] xy = q.poll();
                        int x = xy[0];
                        int y = xy[1];

                        if (G[y][x+1] == 0 && visited[y][x+1] == 0) {
                            q.add(new int[]{x+1, y});
                            dist[y][x+1] = dist[y][x] + 1;
                            visited[y][x+1] = 1;
                        }

                        if (G[y][x-1] == 0 && visited[y][x-1] == 0) {
                            q.add(new int[]{x-1, y});
                            dist[y][x-1] = dist[y][x] + 1;
                            visited[y][x-1] = 1;
                        }

                        if (G[y+1][x] == 0 && visited[y+1][x] == 0) {
                            q.add(new int[]{x, y+1});
                            dist[y+1][x] = dist[y][x] + 1;
                            visited[y+1][x] = 1;
                        }

                        if (G[y-1][x] == 0 && visited[y-1][x] == 0) {
                            q.add(new int[]{x, y-1});
                            dist[y-1][x] = dist[y][x] + 1;
                            visited[y-1][x] = 1;
                        }
                    }
                    for (int i = 0; i < W+2; i++) {
                        for (int j = 0; j < H+2; j++) {
                            ans = Math.max(ans, dist[j][i]);
                        }
                    }
                }
            }
        }
        System.out.println(ans);
    }
}