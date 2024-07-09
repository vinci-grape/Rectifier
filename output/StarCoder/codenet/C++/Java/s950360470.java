import java.util.*;
import java.lang.*;
import java.io.*;

public class s950360470 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        System.out.println(mod_nCk(k, n, 1000000007));
    }

    //a^n % mod
    static long pow(long a, long n) {
        long res = 1;
        while (n > 0) {
            if (n % 2 == 1) res = res * a % 1000000007;
            a = a * a % 1000000007;
            n /= 2;
        }
        return res;
    }

    //a^n % mod
    static long mod_pow(long a, long n, long mod) {
        long res = 1;
        while (n > 0) {
            if (n % 2 == 1) res = res * a % mod;
            a = a * a % mod;
            n /= 2;
        }
        return res;
    }

    //a^(-1) % mod (only if : a % p!= 0)
    static long mod_inv(long a, long mod) {
        return mod_pow(a, mod - 2, mod);
    }

    //nCk % mod
    static long mod_nCk(int n, int k, int mod) {
        if (n == 0 || k == 0) return 1;
        long p = 1, q = 1;
        for (int i = n - k + 1; i <= n; i++)
            p = (p * i) % mod;
        for (int i = 2; i <= k; i++)
            q = (q * i) % mod;
        q = mod_inv(q, mod);
        return (p * q) % mod;
    }
}