import java.util.*;

public class s098326932 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long K = sc.nextLong();
        long N = f(1);
        for (long i = 0; i < K; i++) {
            System.out.println(N);
            N = f(N + 1);
        }
    }

    public static long f(long N) {
        ArrayList<Long> a = new ArrayList<>();
        long d = 0;
        while (N > 0) {
            a.add(N % 10);
            N /= 10;
            d++;
        }
        double m = 1e18;
        long res = N;
        for (int i = 0; i <= d; i++) {
            long bunsi = 0;
            long bunbo = 9 * i;
            for (int j = a.size() - 1; j >= 0; j--) {
                bunsi *= 10;
                if (j < i) {
                    bunsi += 9;
                } else {
                    bunsi += a.get(j);
                }

                if (j >= i) {
                    bunbo += a.get(j);
                }
            }
            double frac = (double) bunsi / (double) bunbo;
            if (frac < m) {
                m = frac;
                res = bunsi;
            }
        }
        return res;
    }
}