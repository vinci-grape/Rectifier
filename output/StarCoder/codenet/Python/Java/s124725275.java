import java.util.*;
import java.io.*;
import java.math.*;

public class s124725275 {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String[] HW = br.readLine().split(" ");
        int H = Integer.parseInt(HW[0]);
        int W = Integer.parseInt(HW[1]);
        String[] S = br.readLine().split(" ");
        int si = Integer.parseInt(S[0]);
        int sj = Integer.parseInt(S[1]);
        String[] T = br.readLine().split(" ");
        int ti = Integer.parseInt(T[0]);
        int tj = Integer.parseInt(T[1]);
        int[][] S = new int[H][W];
        int[][] D = new int[H][W];
        for (int i = 0; i < H; i++) {
            String[] S_i = br.readLine().split(" ");
            for (int j = 0; j < W; j++) {
                S[i][j] = Integer.parseInt(S_i[j]);
            }
        }
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                D[i][j] = -1;
            }
        }
        Queue<int[]> que = new LinkedList<>();
        que.add(new int[] { 0, si, sj });
        while (!que.isEmpty()) {
            int[] cij = que.poll();
            int c = cij[0];
            int i = cij[1];
            int j = cij[2];
            if (D[i][j]!= -1) {
                continue;
            }
            D[i][j] = c;
            for (int di = -2; di <= 2; di++) {
                for (int dj = -2; dj <= 2; dj++) {
                    int ni = i + di;
                    int nj = j + dj;
                    if (ni < 0 || ni >= H || nj < 0 || nj >= W || ni == nj || D[ni][nj]!= -1 || S[ni][nj] == 1) {
                        continue;
                    }
                    if (di == 0 && Math.abs(dj) == 1) {
                        que.add(new int[] { c, ni, nj });
                    } else {
                        que.add(new int[] { c + 1, ni, nj });
                    }
                }
            }
        }
        bw.write(D[ti][tj] + "");
        bw.flush();
        bw.close();
    }
}