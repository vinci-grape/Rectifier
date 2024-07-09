import java.util.Scanner;
public class atcoder_AGC029_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] A = new int[sc.nextInt()];
        for (int i = 0; i < A.length; i++) {
            A[i] = sc.nextInt();
        }
        int[] dp = new int[A.length];
        dp[0] = A[0];
        for (int i = 1; i < A.length; i++) {
            if (A[i] <= dp[i - 1]) {
                dp[i] = A[i];
            } else {
                dp[i] = dp[i - 1];
            }
        }
        int l = 0, r = A.length - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (isPossible(dp, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        System.out.println(l);
    }
    public static boolean isPossible(int[] dp, int k) {
        for (int i = 0; i < dp.length; i++) {
            if (dp[i] > k) {
                return false;
            }
        }
        return true;
    }
}