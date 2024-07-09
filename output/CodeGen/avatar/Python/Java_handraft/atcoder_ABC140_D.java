public class atcoder_ABC140_D {
    public int findHappy(int N, int K) {
        int[] S = new int[N];
        int[] happy = new int[N];
        int[] happy_cnt = new int[N];
        for (int i = 0; i < N; i++) {
            S[i] = i + 1;
            happy_cnt[i] = 1;
        }
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (S[i] == S[j]) {
                    happy_cnt[i]++;
                    happy_cnt[j]++;
                }
            }
        }
        int ans = N - 1;
        for (int i = 0; i < N; i++) {
            if (happy_cnt[i] >= K) {
                ans = Math.min(ans, i);
            }
        }
        return ans;
    }
}