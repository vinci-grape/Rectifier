import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class s098326932 {

    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        int K;
        try {
            st = new StringTokenizer(br.readLine());
            K = Integer.parseInt(st.nextToken());
        } catch (Exception e) {
            return;
        }
        long N = f(1);
        for (int i = 0; i < K; i++) {
            System.out.println(N);
            N = f(N+1);
        }
    }

    public static long f(long N) {
        long[] a = new long[20];
        int d = 0;
        while (N > 0) {
            a[d] = N % 10;
            N /= 10;
            d++;
        }
        double m = 1e18;
        long res = N;
        for (int i = 0; i <= d; i++) {
            long bunsi = 0;
            long bunbo = 9 * i;
            for (int j = d-1; j >= 0; j--) {
                bunsi *= 10;
                if (j < i) bunsi += 9;
                else bunsi += a[j];
                
                if (j >= i) bunbo += a[j];
                
            }
            //System.out.println("bb" + bunsi +  " " + bunbo + "  ");
            double frac = (double) bunsi / (double) bunbo;
            if (frac < m) {
                m = frac;
                res = bunsi;
            }
        }
        return res;
    }
}