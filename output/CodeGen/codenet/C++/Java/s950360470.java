public class s950360470 {
    public int modPow(int a, int n, int mod) {
        if (n == 0) return 1;
        int res = 1;
        while (n > 0) {
            if ((n & 1) == 1) res = (res * a) % mod;
            a = (a * a) % mod;
            n >>= 1;
        }
        return res;
    }
    public int modInv(int a, int mod) {
        return modPow(a, mod - 2, mod);
    }
    public int modNChooseK(int n, int k) {
        if (n == 0 || k == 0) return 1;
        int p = 1, q = 1;
        for (int i = n - k + 1; i <= n; i++)
            p = (p * i) % MOD;
        for (int i = 2; i <= k; i++)
            q = (q * i) % MOD;
        q = modInv(q, MOD);
        return (p * q) % MOD;
    }
}