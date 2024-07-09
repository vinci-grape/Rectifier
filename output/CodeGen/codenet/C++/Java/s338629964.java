public class s338629964 {
    public static void main(String[] args) {
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int aall = 0;
        int ball = 0;
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            b[i] = sc.nextInt();
            aall += a[i];
            ball += b[i];
        }
        int[][] dp = new int[aall + 1][ball + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) {
            int id = i % 2;
            for (int asum = aall; asum >= 0; asum--) {
                for (int cnt = 0; cnt <= ball; cnt++) {
                    for (int p = 0; p < 2; p++) {
                        if (asum - a[i - 1] < 0) continue;
                        int pw = 1;
                        for (int use = 0; use < b[i - 1]; use++) {
                            if (cnt - use >= 0) {
                                int tmp = nCk(cnt, use) * pw * dp[asum - a[i - 1]][cnt - use] % MOD * inv(a[i - 1]) % MOD;
                                dp[asum][cnt][p] += tmp;
                                dp[asum][cnt][p] %= MOD;
                            } else break;
                            pw = pw * a[i - 1] % MOD;
                        }
                        if (cnt - b[i - 1] + 1 >= 0) {
                            dp[asum][cnt][p] += nCk(cnt, b[i - 1] - 1) * pw * dp[asum - a[i - 1]][cnt - b[i - 1] + 1] % MOD * inv(a[i - 1]) % MOD;
                            dp[asum][cnt][p] %= MOD;
                        }
                    }
                }
            }
        }
        int ans = 0;
        for (int asum = 0; asum <= aall; asum++) {
            int rev_asum_pow = 1;
            for (int cnt = 0; cnt <= ball; cnt++) {
                rev_asum_pow = rev_asum_pow * inv(rev[asum]) % MOD;
                for (int p = 0; p < 2; p++) {
                    int x = dp[asum][cnt][p] * rev_asum_pow * (cnt + 1) % MOD * aall % MOD * rev[asum] % MOD;
                    if (p == 1) ans += x;
                    else ans -= x;
                    ans %= MOD;
                }
            }
        }
        if (ans < 0) ans += MOD;
        System.out.println(ans);
    }
}