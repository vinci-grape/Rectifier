import java.util.*;

public class atcoder_AGC017_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] candidates = scanner.nextInt().split(" ");
        int target = Integer.parseInt(scanner.next());
        int[] dp = new int[target + 1];
        Arrays.fill(dp, -1);
        dp[0] = 1;
        for (int i = 0; i < candidates.length; i++) {
            for (int j = 0; j < dp.length; j++) {
                if (dp[j]!= -1) {
                    if (j + candidates[i] <= target) {
                        dp[j + candidates[i]] += dp[j];
                    }
                }
            }
        }
        System.out.println(dp[target]);
    }
}