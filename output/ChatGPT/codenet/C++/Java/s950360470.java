import java.util.Scanner;

public class s950360470 {
    
    static final long MOD = 1000000007;
    
    // a^n
    static long pow(long a, long n) {
        long res = 1;
        while (n > 0) {
            if ((n & 1) == 1) res *= a;
            a *= a;
            n >>= 1;
        }
        return res;
    }
    
    // a^n % mod
    static long modPow(long a, long n, long mod) {
        long res = 1;
        while (n > 0) {
            if ((n & 1) == 1) res = (res * a) % mod;
            a = (a * a) % mod;
            n >>= 1;
        }
        return res;
    }
    
    // a^(-1) % mod (only if : a % p != 0)
    static long modInv(long a, long mod) {
        return modPow(a, mod - 2, mod);
    }
    
    // nCk % mod
    static long modNCk(int n, int k, int mod) {
        if (n == 0 || k == 0) return 1;
        long p = 1, q = 1;
        for (int i = n - k + 1; i <= n; i++)
            p = (p * i) % MOD;
        for (int i = 2; i <= k; i++)
            q = (q * i) % MOD;
        q = modInv(q, MOD);
        return (p * q) % MOD;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        System.out.println(modNCk(k, n, MOD));
    }
}