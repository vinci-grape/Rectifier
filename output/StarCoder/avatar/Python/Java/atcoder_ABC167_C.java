import java.util.*;
public class atcoder_ABC167_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int x = sc.nextInt();
        int[][] c = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                c[i][j] = sc.nextInt();
            }
        }
        int[] pre = new int[n];
        for (int i = 0; i < n; i++) {
            pre[i] = i;
        }
        List<int[]> l = new ArrayList<>();
        List<int[]> rem = new ArrayList<>();
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            for (int[] j : l) {
                int ca = 0;
                for (int ii : j) {
                    ca += c[ii][i];
                }
                if (ca < x) {
                    rem.add(0, j);
                } else {
                    continue;
                }
            }
            if (rem.size() > 0) {
                for (int[] j : rem) {
                    l.remove(j);
                }
                rem.clear();
            }
            if (l.size() == 0) {
                System.out.println(-1);
                return;
            }
            for (int[] j : l) {
                int ca = 0;
                for (int ii : j) {
                    ca += c[ii][0];
                }
                if (ans == 0) {
                    ans = ca;
                } else {
                    ans = Math.min(ans, ca);
                }
            }
            System.out.println(ans);
        }
    }
}

