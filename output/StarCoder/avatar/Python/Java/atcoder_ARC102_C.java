import java.util.*;
import java.math.*;
public class atcoder_ARC102_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int K, N;
        K = in.nextInt();
        N = in.nextInt();
        int[] ans = new int[2 * K + 1];
        ans[0] = 0;
        ans[1] = 1;
        for (int i = 2; i <= 2 * K; i++) {
            ans[i] = (ans[i - 1] + ans[i - 2]) % 998244353;
        }
        if (N <= K + 1) {
            System.out.println(ans[N]);
        } else {
            System.out.println(ans[2 * K - N]);
        }
    }
}