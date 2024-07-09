import java.util.*;
public class atcoder_AGC033_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int[][] graph = new int[h][w];
        for (int i = 0; i < h; i++) {
            String s = sc.next();
            for (int j = 0; j < w; j++) {
                if (s.charAt(j) == '#') {
                    graph[i][j] = 0;
                } else {
                    graph[i][j] = Integer.MAX_VALUE;
                }
            }
        }
        for (int i = 0; i < w - 1; i++) {
            for (int j = 0; j < h; j++) {
                if (graph[j][i] + 1 < graph[j][i + 1]) {
                    graph[j][i + 1] = graph[j][i] + 1;
                }
            }
        }
        for (int i = w - 1; i >= 0; i--) {
            for (int j = 0; j < h; j++) {
                if (graph[j][i] + 1 < graph[j][i - 1]) {
                    graph[j][i - 1] = graph[j][i] + 1;
                }
            }
        }
        for (int i = 0; i < h - 1; i++) {
            for (int j = 0; j < w; j++) {
                if (graph[i][j] + 1 < graph[i + 1][j]) {
                    graph[i + 1][j] = graph[i][j] + 1;
                }
            }
        }
        for (int i = h - 1; i >= 0; i--) {
            for (int j = 0; j < w; j++) {
                if (graph[i][j] + 1 < graph[i - 1][j]) {
                    graph[i - 1][j] = graph[i][j] + 1;
                }
            }
        }
        int max = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (graph[i][j] > max) {
                    max = graph[i][j];
                }
            }
        }
        System.out.println(max);
    }
}