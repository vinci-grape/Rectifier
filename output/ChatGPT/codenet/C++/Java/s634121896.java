import java.util.*;
import java.io.*;

public class s634121896 {
    static final int MOD = 1000000007;

    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        long[] dp = new long[n + 1];
        dp[0] = 1;
        Map<Integer, Integer> kek = new HashMap<>();
        Map<Integer, Integer> prev = new HashMap<>();
        for (int i = 1; i <= n; i++) {
            dp[i] = (dp[i - 1] + (prev.getOrDefault(nums[i - 1], i - 1) != i - 1 ? kek.getOrDefault(nums[i - 1], 0) : 0)) % MOD;
            kek.put(nums[i - 1], (int)dp[i]);
            prev.put(nums[i - 1], i);
        }
        System.out.println(dp[n]);
    }

    static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        public FastScanner() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }
    }
}