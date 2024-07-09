import java.util.*;

public class s951169509 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int H = input.nextInt();
        int W = input.nextInt();
        input.nextLine();
        
        char[][] G = new char[H+2][W+2];
        for (int i = 0; i < H+2; i++) {
            if (i == 0 || i == H+1) {
                Arrays.fill(G[i], '#');
            } else {
                String line = input.nextLine();
                G[i][0] = '#';
                for (int j = 0; j < W; j++) {
                    G[i][j+1] = line.charAt(j);
                }
                G[i][W+1] = '#';
            }
        }
        
        int ans = 0;
        for (int sx = 0; sx < W+2; sx++) {
            for (int sy = 0; sy < H+2; sy++) {
                if (G[sy][sx] == '.') {
                    int[][] dist = new int[H+2][W+2];
                    int[][] visited = new int[H+2][W+2];
                    for (int i = 0; i < H+2; i++) {
                        Arrays.fill(dist[i], -1);
                        Arrays.fill(visited[i], -1);
                    }
                    Queue<Pair> queue = new LinkedList<>();
                    queue.add(new Pair(sx, sy));
                    dist[sy][sx] = 0;
                    visited[sy][sx] = 1;
                    while (!queue.isEmpty()) {
                        Pair pair = queue.poll();
                        int x = pair.x;
                        int y = pair.y;
                        if (G[y][x+1] == '.' && visited[y][x+1] == -1) {
                            queue.add(new Pair(x+1, y));
                            dist[y][x+1] = dist[y][x] + 1;
                            visited[y][x+1] = 1;
                        }
                        if (G[y][x-1] == '.' && visited[y][x-1] == -1) {
                            queue.add(new Pair(x-1, y));
                            dist[y][x-1] = dist[y][x] + 1;
                            visited[y][x-1] = 1;
                        }
                        if (G[y+1][x] == '.' && visited[y+1][x] == -1) {
                            queue.add(new Pair(x, y+1));
                            dist[y+1][x] = dist[y][x] + 1;
                            visited[y+1][x] = 1;
                        }
                        if (G[y-1][x] == '.' && visited[y-1][x] == -1) {
                            queue.add(new Pair(x, y-1));
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
    
    static class Pair {
        int x, y;
        
        public Pair(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }
}