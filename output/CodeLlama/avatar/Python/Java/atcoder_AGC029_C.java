import java.util.*;
public class atcoder_AGC029_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] A = new int[sc.nextInt()];
        for (int i = 0; i < A.length; i++) {
            A[i] = sc.nextInt();
        }
        Arrays.sort(A);
        int N = A.length;
        int[][] dp = new int[N][2];
        dp[0][0] = A[0];
        dp[0][1] = 0;
        for (int i = 1; i < N; i++) {
            if (A[i] <= dp[i - 1][0]) {
                dp[i][0] = A[i];
                dp[i][1] = 0;
            } else {
                dp[i][0] = A[i];
                dp[i][1] = dp[i - 1][1] + 1;
            }
        }
        int K = sc.nextInt();
        int L = 0, R = N;
        while (L < R) {
            int mid = (L + R) / 2;
            if (isPossible(dp, mid, K)) {
                R = mid;
            } else {
                L = mid + 1;
            }
        }
        System.out.println(L);
    }
    public static boolean isPossible(int[][] dp, int mid, int K) {
        int i = 0;
        while (i < dp.length) {
            if (dp[i][1] < K - 1) {
                int j = i + 1;
                while (j < dp.length && dp[j][0] <= dp[i][0] + mid) {
                    j++;
                }
                if (j == dp.length) {
                    return false;
                }
                if (dp[j][0] > dp[i][0] + mid) {
                    dp[i][0] = dp[i][0] + mid;
                    dp[i][1]++;
                } else {
                    dp[i][0] = dp[j][0];
                    dp[i][1] = 0;
                }
                i = j;
            } else {
                i++;
            }
        }
        return true;
    }
}