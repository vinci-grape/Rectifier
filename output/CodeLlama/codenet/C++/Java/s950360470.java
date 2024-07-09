import java.util.Scanner;

public class s950360470 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        System.out.println(mod_nCk(k, n, MOD));
    }

    public static long mod_nCk(int n, int k, int mod) {
        if (n == 0 || k == 0) return 1;
        long p = 1, q = 1;
        for (int i = n - k + 1; i <= n; i++)
            p = (p * i) % mod;
        for (int i = 2; i <= k; i++)
            q = (q * i) % mod;
        q = mod_inv(q, mod);
        return (p * q) % mod;
    }

    public static long mod_pow(long a, long n, int mod) {
        long res = 1;
        while (n > 0) {
            if (n % 2 == 1) res = res * a % mod;
            a = a * a % mod;
            n /= 2;
        }
        return res;
    }

    public static long mod_inv(long a, int mod) {
        return mod_pow(a, mod - 2, mod);
    }
}