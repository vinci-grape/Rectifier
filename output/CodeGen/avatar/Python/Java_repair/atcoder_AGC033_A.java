import java.util.*;

public class atcoder_AGC033_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] grid = scanner.nextLine().split(" ");
        System.out.println(maxPathSum(grid));
    }
    public static int maxPathSum(int[][] grid) {
        int h = grid.length;
        int w = grid[0].length;
        int[][] graph = new int[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (grid[i][j] == '#') {
                    graph[i][j] = Integer.MAX_VALUE;
                } else {
                    graph[i][j] = grid[i][j];
                }
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (grid[i][j] == '#') {
                    graph[i][j] = Integer.MAX_VALUE;
                } else {
                    graph[i][j] = grid[i][j];
                }
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (i > 0) {
                    graph[i][j] = Math.min(graph[i][j], graph[i - 1][j] + 1);
                }
                if (j > 0) {
                    graph[i][j] = Math.min(graph[i][j], graph[i][j - 1] + 1);
                }
            }
        }
        return Math.max(0, graph[h - 1][w - 1]);
    }
}