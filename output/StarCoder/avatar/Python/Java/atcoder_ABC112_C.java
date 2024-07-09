import java.util.*;
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
        for (int i = 0; i < n; i++) {
            if (ls_xyh[i][2] > 0) {
                x0 = ls_xyh[i][0];
                break;
            }
        }
        List<int[]> cands = new ArrayList<int[]>();
        for (int i = 0; i < 101; i++) {
            for (int j = 0; j < 101; j++) {
                int cx = i;
                int cy = j;
                int h0 = ls_xyh[0][2];
                int h = h0 + Math.abs(cx - x0) + Math.abs(cy - ls_xyh[0][1]);
                for (int k = 1; k < n; k++) {
                    int x = ls_xyh[k][0];
                    int y = ls_xyh[k][1];
                    int h_ = Math.max(h - Math.abs(cx - x) - Math.abs(cy - y), 0);
                    if (h_!= ls_xyh[k][2]) {
                        break;
                    }
                    h = h_;
                }
                cands.add(new int[]{cx, cy, h});
            }
        }
        int[] ans = cands.get(0);
        return String.format("%d %d %d", ans[0], ans[1], ans[2]);
    }
}