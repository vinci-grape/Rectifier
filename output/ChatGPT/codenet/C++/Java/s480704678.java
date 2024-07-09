import java.util.*;

public class s480704678 {
    
    static long INF = 1001001001001001L;
    static int inf = 1000000007;
    static long MOD = 1000000007L;
    static double PI = 3.1415926535897932;
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        long[] a = new long[n];
        long[] acc = new long[n + 1];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextLong();
            acc[i + 1] = acc[i] + a[i];
            acc[i + 1] %= MOD;
        }
        
        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] % MOD * (MOD + acc[n] - acc[i + 1]) % MOD;
            ans %= MOD;
        }
        System.out.println(ans);
        
        sc.close();
    }
}