import java.io.*;
    import java.util.*;
    import java.text.*;
    import java.math.*;
    import java.util.regex.*;
    
    public class s448220316 {
    
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            int n = in.nextInt();
            int m = in.nextInt();
            int[] fa = new int[n + 1];
            int[] v = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                fa[i] = i;
            }
            for (int i = 1; i <= m; i++) {
                int l = in.nextInt();
                int r = in.nextInt();
                int vi = in.nextInt();
                int li = get(l);
                int ri = get(r);
                if (li!= ri) {
                    v[ri] = vi - v[r] + v[l];
                    fa[ri] = li;
                } else {
                    if (v[r] - v[l]!= vi) {
                        System.out.println("No");
                        return;
                    }
                }
            }
            System.out.println("Yes");
        }
    
        public static int get(int x) {
            if (x == fa[x]) return x;
            int f = get(fa[x]);
            v[x] += v[fa[x]];
            return fa[x] = f;
        }
    }