import java.util.*;
import java.io.*;

public class s003531724 {
    static final int N = 100010;
    
    static class Edge {
        int to, pre, c;
        public Edge(int to, int pre, int c) {
            this.to = to;
            this.pre = pre;
            this.c = c;
        }
    };
    
    static Edge[] e = new Edge[N << 1];
    static int[] u = new int[N];
    static int l = 0;
    
    static void ins(int a, int b, int c) {
        e[++l] = new Edge(b, u[a], c);
        u[a] = l;
    }
    
    static int n, m;
    static boolean[] vis = new boolean[N];
    static boolean ok;
    static long[] cnt = new long[3];
    static int[] d = new int[N];
    static int T;
    
    static void dfs(int x, int l) {
        vis[x] = true;
        cnt[l]++;
        d[x] = l;
        for (int i = u[x]; i != 0; i = e[i].pre) {
            T++;
            if (!vis[e[i].to]) {
                dfs(e[i].to, (l + e[i].c) % 3);
            } else if ((l + e[i].c) % 3 != d[e[i].to]) {
                ok = false;
            }
        }
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        
        for (int i = 1; i <= m; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            ins(a, b, 1);
            ins(b, a, 2);
        }
        
        long ans = 0;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                T = 0;
                for (int j = 0; j <= 2; j++) {
                    cnt[j] = 0;
                }
                ok = true;
                dfs(i, 0);
                long s = cnt[0] + cnt[1] + cnt[2];
                if (!ok) {
                    ans += s * s;
                } else {
                    if (cnt[0] > 0 && cnt[1] > 0 && cnt[2] > 0) {
                        ans += cnt[0] * cnt[1] + cnt[1] * cnt[2] + cnt[2] * cnt[0];
                    } else {
                        ans += T / 2;
                    }
                }
            }
        }
        
        System.out.println(ans);
    }
}