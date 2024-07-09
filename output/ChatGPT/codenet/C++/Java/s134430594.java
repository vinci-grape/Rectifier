import java.util.*;

public class s134430594 {

    static class Ban {
        int l;
        int r;
        int val;

        Ban() {}

        Ban(int l_, int r_, int val_) {
            l = l_;
            r = r_;
            val = val_;
        }
    }

    static class Sp {
        static final int LIM = 20;
        static final int N = 200007;

        static int[][] mn = new int[LIM][N];
        static int[] pw = new int[N];

        static void init(List<Integer> a) {
            int n = a.size();
            for (int i = 0; i < n; i++) {
                mn[0][i] = a.get(i);
            }
            for (int i = 0; i + 1 < LIM; i++) {
                for (int j = 0; j + (1 << (i + 1)) <= n; j++) {
                    mn[i + 1][j] = Math.max(mn[i][j], mn[i][j + (1 << i)]);
                }
            }
            pw[1] = 0;
            for (int i = 2; i < N; i++) {
                pw[i] = pw[i / 2] + 1;
            }
        }

        static int get(int l, int r) {
            r++;
            int p = pw[r - l];
            return Math.min(mn[p][l], mn[p][r - (1 << p)]);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }
        List<Integer> dl = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (a.get(i) > i) {
                System.out.println(-1);
                return;
            }
            dl.add(i - a.get(i));
        }
        int ans = 0;
        List<Ban> bans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int r = i;
            while (r + 1 < n && a.get(r) + 1 == a.get(r + 1)) {
                r++;
            }
            ans += a.get(r);
            i = r;
            bans.add(new Ban(r - a.get(r), r, r - a.get(r)));
        }
        Sp.init(dl);
        for (Ban t : bans) {
            if (Sp.get(t.l, t.r) > t.val) {
                System.out.println(-1);
                return;
            }
        }
        System.out.println(ans);
    }
}