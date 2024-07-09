import java.util.*;
public class atcoder_ABC128_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] li = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                li[i][j] = sc.nextInt();
            }
        }
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        Set<Integer> q = new HashSet<>();
        Set<Integer> r = new HashSet<>();
        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n; j++) {
                q.add(li[i][j]);
            }
        }
        for (int i = 1; i <= n; i++) {
            r.add(i);
        }
        r.removeAll(q);
        int ans = 0;
        for (int i = 0; i <= q.size(); i++) {
            for (Set<Integer> s : Sets.powerSet(q)) {
                if (s.size() % 2!= p[i]) {
                    break;
                }
            } else {
                ans += Math.pow(2, r.size());
            }
        }
        System.out.println(ans);
    }
}