import java.util.*;
import java.math.*;

public class s790754864 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int R = N - K;
        int mod = 1000000007;
        long ans = 1;
        for (int i = 1; i <= K; i++) {
            if (N - K + 1 < i) {
                ans = 0;
            } else {
                ans = (ans * fact(R + 1, i)) % mod;
                ans = (ans * fact(K - 1, i - 1)) % mod;
            }
            System.out.println(ans);
        }
    }

    public static long fact(int n, int r) {
        return (long) Math.pow(n, r) % 1000000007;
    }
}