import java.util.*;

public class atcoder_ARC102_C {
    static int K, N;
    static int mod = 998244353;
    static int __N = 8000;
    static List<Integer> g1 = new ArrayList<>();
    static List<Integer> g2 = new ArrayList<>();
    static List<Integer> inverse = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        K = scanner.nextInt();
        N = scanner.nextInt();

        for (int i = 0; i <= __N; i++) {
            g1.add(0);
            g2.add(0);
            inverse.add(0);
        }

        g1.set(0, 1);
        g1.set(1, 1);
        g2.set(0, 1);
        g2.set(1, 1);
        inverse.set(0, 0);
        inverse.set(1, 1);

        for (int i = 2; i <= __N; i++) {
            g1.set(i, (g1.get(i - 1) * i) % mod);
            inverse.set(i, (-inverse.get(mod % i) * (mod / i)) % mod);
            g2.set(i, (g2.get(i - 1) * inverse.get(i)) % mod);
        }

        List<Integer> ans = new ArrayList<>();
        for (int i = 2; i <= 2 * K; i++) {
            if (i <= K + 1) {
                int tmp = solve(i) % mod;
                ans.add(tmp);
                System.out.println(tmp);
            } else {
                System.out.println(ans.get(ans.size() - i + K));
            }
        }
    }

    static int cmb(int n, int r) {
        if (r < 0 || r > n) {
            return 0;
        }
        r = Math.min(r, n - r);
        return (g1.get(n) * g2.get(r) % mod * g2.get(n - r)) % mod;
    }

    static int kumiawase(int p, int q) {
        return cmb(p + q - 1, q - 1);
    }

    static int solve(int n) {
        assert n <= K + 1;
        int ans = 0;
        int kumi = (n - 1) / 2;
        for (int p = 0; p <= kumi; p++) {
            if (p > N) {
                break;
            }
            ans += Math.pow(2, p) * cmb(kumi, p) * kumiawase(N - p, p + (K - kumi * 2 - (n % 2 == 0 ? 1 : 0)));
            if (n % 2 == 0 && N - p - 1 >= 0) {
                ans += Math.pow(2, p) * cmb(kumi, p) * kumiawase(N - p - 1, p + (K - kumi * 2 - (n % 2 == 0 ? 1 : 0)));
            }
        }
        return ans;
    }
}