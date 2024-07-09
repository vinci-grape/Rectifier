import java.util.*;
import java.math.*;

public class s789380051 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long a = in.nextLong();
        long b = in.nextLong();
        long ans = 1;
        ans = (long) Math.pow(2, n);
        ans--;
        long tmp_nd;
        tmp_nd = comb_s(n, a);
        ans = (ans - tmp_nd) % MOD;
        while (ans < 0) {
            ans += MOD;
        }
        tmp_nd = comb_s(n, b);
        ans = (ans - tmp_nd) % MOD;
        while (ans < 0) {
            ans += MOD;
        }
        System.out.println(ans);
    }

    public static long comb_s(long n, long r) {
        long tmp_n = 1;
        long tmp_d = 1;
        long ans;
        for (int i = 1; i <= r; i++) {
            tmp_n = (tmp_n * (n + 1 - i)) % MOD;
            tmp_d = (tmp_d * i) % MOD;
            ans = tmp_n * mod_pow(tmp_d, MOD - 2);
        }
        return ans;
    }

    public static long mod_pow(long x, long n) {
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
}