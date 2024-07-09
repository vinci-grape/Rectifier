import java.util.Scanner;

public class s789380051 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long a = sc.nextLong();
        long b = sc.nextLong();
        long ans = 1;
        ans = (long) Math.pow(2, n);
        ans--;
        long tmp_nd;
        tmp_nd = comb_s(n, a);
        ans = (ans - tmp_nd) % 1000000007;
        while (ans < 0) {
            ans += 1000000007;
        }
        // System.out.println(ans + " " + tmp_ans);

        tmp_nd = comb_s(n, b);
        ans = (ans - tmp_nd) % 1000000007;
        // System.out.println(ans + " " + tmp_ans);
        while (ans < 0) {
            ans += 1000000007;
        }

        System.out.println(ans);

    }

    public static long comb_s(long n, long r) {
        long tmp_n = 1;
        long tmp_d = 1;
        long ans;
        for (int i = 1; i <= r; i++) {
            tmp_n = (tmp_n * (n + 1 - i)) % 1000000007;
            tmp_d = (tmp_d * i) % 1000000007;
            ans = tmp_n * mod_pow(tmp_d, 1000000006);
        }

        return ans;
    }

    public static long mod_pow(long x, long n) {
        long ans = 1;
        while (n > 0) {
            if ((n & 1) == 1) {
                ans = ans * x % 1000000007;
            }
            x = x * x % 1000000007;
            n >>= 1;
        }
        return ans;
    }
}