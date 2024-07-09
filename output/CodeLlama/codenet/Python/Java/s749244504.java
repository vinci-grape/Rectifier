import java.util.*;
import java.io.*;

public class s749244504 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] hw = br.readLine().split(" ");
        int h = Integer.parseInt(hw[0]);
        int w = Integer.parseInt(hw[1]);
        int[][] C = new int[10][10];
        for (int i = 0; i < 10; i++) {
            String[] cs = br.readLine().split(" ");
            for (int j = 0; j < 10; j++) {
                C[i][j] = Integer.parseInt(cs[j]);
            }
        }
        int[][] A = new int[h][w];
        for (int i = 0; i < h; i++) {
            String[] as = br.readLine().split(" ");
            for (int j = 0; j < w; j++) {
                A[i][j] = Integer.parseInt(as[j]);
            }
        }
        int[][] d = new int[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                d[i][j] = -1;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (i == 1) {
                continue;
            }
            for (int j = 0; j < 10; j++) {
                if (C[i][j] == 0) {
                    continue;
                }
                if (d[i][j] == -1) {
                    d[i][j] = 0;
                }
                for (int k = 0; k < 10; k++) {
                    if (C[j][k] == 0) {
                        continue;
                    }
                    if (d[j][k] == -1) {
                        d[j][k] = 0;
                    }
                    d[i][k] = Math.min(d[i][k], d[i][j] + d[j][k] + C[j][k]);
                }
            }
        }
        int s = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (A[i][j] == -1 || A[i][j] == 1) {
                    continue;
                }
                s += d[A[i][j]][1];
            }
        }
        System.out.println(s);
    }
}