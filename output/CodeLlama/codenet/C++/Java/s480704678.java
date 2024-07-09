import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class s480704678 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        long[] a = new long[n];
        long[] acc = new long[n + 1];
        for (int i = 0; i < n; i++) {
            a[i] = Long.parseLong(st.nextToken());
            acc[i + 1] = acc[i] + a[i];
            acc[i + 1] %= MOD;
        }

        long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i] % MOD * (MOD + acc[n] - acc[i + 1]) % MOD;
            ans %= MOD;
        }
        System.out.println(ans);
    }

    private static final int MOD = 1000000007;
}