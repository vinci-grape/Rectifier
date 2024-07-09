import java.util.*;
import java.io.*;

public class atcoder_ABC112_C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] ls_xyh = new int[n][3];
        for (int i = 0; i < n; i++) {
            String[] ws = br.readLine().split(" ");
            for (int j = 0; j < 3; j++) {
                ls_xyh[i][j] = Integer.parseInt(ws[j]);
            }
        }
        String ans = solve(n, ls_xyh);
        System.out.println(ans);
    }
    public static String solve(int n, int[][] ls_xyh) {
        int[] x0 = new int[n];
        int[] y0 = new int[n];
        int[] h0 = new int[n];
        for (int i = 0; i < n; i++) {
            if (ls_xyh[i][2] > 0) {
                x0[i] = ls_xyh[i][0];
                y0[i] = ls_xyh[i][1];
                h0[i] = ls_xyh[i][2];
                break;
            }
        }
        int[] cx = new int[101];
        int[] cy = new int[101];
        int[] ch = new int[101];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < cx.length; j++) {
                cx[j] = i;
                cy[j] = j;
                ch[j] = h0[i] + Math.abs(cx[j] - x0[i]) + Math.abs(cy[j] - y0[i]);
            }
            Arrays.sort(cx);
            Arrays.sort(cy);
            Arrays.sort(ch);
            int xx = cx[0];
            int yy = cy[