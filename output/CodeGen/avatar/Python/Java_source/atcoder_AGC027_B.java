public class atcoder_AGC027_B {
    public int minCostII(int N, int[][] costs) {
        int[] S = new int[N + 1];
        int[] E = new int[N + 1];
        for (int i = 0; i < N; i++) {
            S[i] = 0;
            E[i] = 0;
        }
        S[0] = 0;
        E[0] = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < i; j++) {
                S[i] += costs[i][j];
            }
            for (int j = i + 1; j < N; j++) {
                E[i] += costs[i][j];
            }
        }
        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            int k = i;
            int s = S[i];
            int e = E[i];
            while (k > 0) {
                s += costs[k][i - 1];
                e += costs[k][i];
                k--;
            }
            ans = Math.min(ans, e + s);
        }
        return ans + N * costs[0][0] + 5 * S[N];
    }
}