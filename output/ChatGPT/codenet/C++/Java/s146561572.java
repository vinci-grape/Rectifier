import java.util.*;
import java.io.*;

public class s146561572 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);

        int t = 1;
        while (t-- > 0) {
            solve(br, out);
        }

        out.close();
    }

    static void solve(BufferedReader br, PrintWriter out) throws IOException {
        long ans = 0;
        int n = Integer.parseInt(br.readLine());
        
        for (int i = 1; i <= n; i++) {
            ans += i * 1L * (n - i + 1);
        }

        for (int i = 1; i < n; i++) {
            String[] uv = br.readLine().split(" ");
            int u = Integer.parseInt(uv[0]);
            int v = Integer.parseInt(uv[1]);
            int a = Math.max(u, v);
            int b = Math.min(u, v);
            ans -= b * 1L * (n - a + 1);
        }

        out.println(ans);
    }
}