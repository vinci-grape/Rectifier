import java.util.Scanner;

public class atcoder_ABC112_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] ls_xyh = new int[n][3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                ls_xyh[i][j] = sc.nextInt();
            }
        }
        System.out.println(solve(n, ls_xyh));
    }
    
    public static String solve(int n, int[][] ls_xyh) {
        int x0 = -1;
        int y0 = -1;
        int h0 = -1;
        for (int i = 0; i < n; i++) {
            if (ls_xyh[i][2] > 0) {
                x0 = ls_xyh[i][0];
                y0 = ls_xyh[i][1];
                h0 = ls_xyh[i][2];
                break;
            }
        }
        int[][] cands = new int[101 * 101][3];
        int idx = 0;
        for (int cx = 0; cx <= 100; cx++) {
            for (int cy = 0; cy <= 100; cy++) {
                cands[idx][0] = cx;
                cands[idx][1] = cy;
                cands[idx][2] = h0 + Math.abs(cx - x0) + Math.abs(cy - y0);
                idx++;
            }
        }
        for (int i = 0; i < n; i++) {
            int[][] newCands = new int[idx][3];
            int newIdx = 0;
            for (int j = 0; j < idx; j++) {
                int cx = cands[j][0];
                int cy = cands[j][1];
                int ch = cands[j][2];
                int diff = Math.max(ch - Math.abs(cx - ls_xyh[i][0]) - Math.abs(cy - ls_xyh[i][1]), 0);
                if (diff == ls_xyh[i][2]) {
                    newCands[newIdx][0] = cx;
                    newCands[newIdx][1] = cy;
                    newCands[newIdx][2] = ch;
                    newIdx++;
                }
            }
            cands = newCands;
            idx = newIdx;
        }
        int xx = cands[0][0];
        int yy = cands[0][1];
        int hh = cands[0][2];
        return xx + " " + yy + " " + hh;
    }
}