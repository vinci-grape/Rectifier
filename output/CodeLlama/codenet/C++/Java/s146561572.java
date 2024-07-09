import java.io.*;
import java.util.*;
import java.math.*;

public class s146561572 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            long ans = 0;
            int n = sc.nextInt();
            // Contribution of The Nodes.
            for (int i = 1; i <= n; i++) {
                ans += i * 1L * (n - i + 1);
            }
            for (int i = 1; i < n; i++) {
                int u = sc.nextInt();
                int v = sc.nextInt();
                int a = Math.max(u, v);
                int b = Math.min(u, v);
                ans -= b * 1L * (n - a + 1);
            }
            System.out.println(ans);
        }
    }
}