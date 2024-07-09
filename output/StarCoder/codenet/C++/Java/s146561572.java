import java.util.*;
import java.lang.*;
import java.io.*;

public class s146561572 {
    public static void main (String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        while (t-- > 0) {
            int n = scan.nextInt();
            int ans = 0;
            for (int i = 1; i <= n; i++) {
                ans += i * (n - i + 1);
            }
            for (int i = 1; i < n; i++) {
                int u = scan.nextInt();
                int v = scan.nextInt();
                int a = Math.max(u, v);
                int b = Math.min(u, v);
                ans -= b * (n - a + 1);
            }
            System.out.println(ans);
        }
    }
}