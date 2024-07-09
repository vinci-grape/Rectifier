public class s568362035 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int Q = in.nextInt();
        int[] a = new int[Q + 1];
        for (int i = 1; i <= Q; i++) {
            a[i] = in.nextInt();
        }
        int[] b = new int[m];
        boolean[] vis = new boolean[n + 1];
        int[] cnt = new int[n + 1];
        for (int i = 0; i < m; i++) {
            b[i] = in.nextInt();
            vis[b[i]] = true;
        }
        for (int i = m - 1; i >= 0; i--) {
            if (!vis[b[i]]) {
                b[i] = in.nextInt();
                vis[b[i]] = true;
            }
        }
        for (int i = 1; i <= m; i++) {
            int t = b[i];
            if (cnt[t - 1] > 0) {
                --cnt[t - 1];
                ++cnt[t];
                vis[t] = true;
            } else if (!vis[t]) {
                System.out.println("No");
                return;
            }
        }
        boolean flag = true;
        int l;
        for (l = 0; cnt[l] == 0; ++l);
        for (int i = l + 1; i < m; ++i) {
            flag &= b[i] < b[i + 1];
        }
        System.out.println(flag? "Yes" : "No");
    }
}