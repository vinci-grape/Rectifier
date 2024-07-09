import java.io.*;
import java.util.*;

public class s134430594 {
    public static void main(String[] args) {
        FastReader in = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] dl = new int[n];
        for (int i = 0; i < n; i++) {
            dl[i] = i - a[i];
        }
        int ans = 0;
        List<Ban> bans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int r = i;
            while (r + 1 < n && a[r] + 1 == a[r + 1]) {
                r++;
            }
            ans += a[r];
            i = r;
            bans.add(new Ban(r - a[r], r, r - a[r]));
        }
        Sp sp = new Sp(dl);
        for (Ban t : bans) {
            if (sp.get(t.l, t.r) > t.val) {
                out.println(-1);
                return;
            }
        }
        out.println(ans);
        out.close();
    }

    static class Ban {
        int l;
        int r;
        int val;

        Ban() {}

        Ban(int l, int r, int val) {
            this.l = l;
            this.r = r;
            this.val = val;
        }
    }

    static class Sp {
        int[] mn;
        int[] pw;

        Sp(int[] a) {
            int n = a.length;
            mn = new int[LIM][n];
            for (int i = 0; i < n; i++) {
                mn[0][i] = a[i]; 
            }
            for (int i = 0; i + 1 < LIM; i++) {
                for (int j = 0; j + (1 << (i + 1)) <= n; j++) {
                    mn[i + 1][j] = Math.max(mn[i][j], mn[i][j + (1 << i)]);
                }
            }
            pw = new int[N];
            pw[1] = 0;
            for (int i = 2; i < N; i++) {
                pw[i] = pw[i / 2] + 1;
            }
        }

        int get(int l, int r) {
            r++;
            int p = pw[r - l];
            return Math.min(mn[p][l], mn[p][r - (1 << p)]);
        }
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        public FastReader(String s) throws FileNotFoundException {
            br = new BufferedReader(new FileReader(new File(s)));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}