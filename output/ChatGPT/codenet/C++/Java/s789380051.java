import java.util.*;

public class s789380051 {
    
    static final int MOD = 1000000007;
    
    public static long modPow(long x, long n) {
        long ans = 1;
        while (n > 0) {
            if ((n & 1) == 1) {
                ans = ans * x % MOD;
            }
            x = x * x % MOD;
            n >>= 1;
        }
        return ans;
    }
    
    public static long combS(long n, long r) {
        long tmpN = 1;
        long tmpD = 1;
        long ans = 0;
        for (int i = 1; i <= r; i++) {
            tmpN = (tmpN * (n + 1 - i)) % MOD;
            tmpD = (tmpD * i) % MOD;
            ans = tmpN * modPow(tmpD, MOD - 2);
        }
        return ans;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        long n = sc.nextLong();
        long a = sc.nextLong();
        long b = sc.nextLong();
        long ans = modPow(2, n);
        ans--;
        long tmpNd = combS(n, a);
        ans = (ans - tmpNd) % MOD;
        while (ans < 0) {
            ans += MOD;
        }
        tmpNd = combS(n, b);
        ans = (ans - tmpNd) % MOD;
        while (ans < 0) {
            ans += MOD;
        }
        
        System.out.println(ans);
    }
}