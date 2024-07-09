public class s086522214 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] h = new int[n];
        for (int i = 0; i < n; i++) {
            h[i] = in.nextInt();
        }
        int K = in.nextInt();
        int[] p = new int[n];
        int[] y = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = in.nextInt();
            y[i] = in.nextInt();
        }
        int[] a = new int[n];
        int[] b = new int[n];
        int[] totab = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            b[i] = in.nextInt();
            totab[i] = in.nextInt();
        }
        int[] a_sorted = new int[n];
        int[] b_sorted = new int[n];
        int[] totab_sorted = new int[n];
        for (int i = 0; i < n; i++) {
            a_sorted[i] = a[i];
            b_sorted[i] = b[i];
            totab_sorted[i] = totab[i];
        }
        a_sorted.sort(reverse=true);
        b_sorted.sort(reverse=true);
        totab_sorted.sort(reverse=true);
        int[] A = new int[n];
        int[] B = new int[n];
        int[] totAB = new int[n];
        for (int i = 0; i < n; i++) {
            A[i] = a_sorted[i];
            B[i] = b_sorted[i];
            totAB[i] = totab_sorted[i];
        }
        int[] dp = new int[n];
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                dp[i] = 0;
            } else {
                for (int k = 1; k <= K; k++) {
                    if (i - k >= 0) {
                        dp[i] = Math.min(dp[i], dp[i - k] + Math.abs(h[i] - h[i - k]));
                    } else {
                        break;
                    }
                }
            }
        }
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result = dp[i];
            } else {
                result = Math.min(result, dp[i]);
            }
        }
        System.out.println(result);
    }
}