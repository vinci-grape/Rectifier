public class atcoder_ABC122_D {
    public int findSubstring(String s, String[] words) {
        int n = s.length();
        int m = words.length;
        int[] count = new int[m];
        int[] memo = new int[n + 1];
        for (int i = 0; i < m; i++) {
            count[i] = words[i].length();
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (count[j] > 0 && s.charAt(i) == words[j].charAt(count[j] - 1)) {
                    count[j]--;
                }
            }
            memo[i + 1] = memo[i] + (count[0] == 0? 1 : 0);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (count[j] == 0) {
                    count[j] = count[j + 1];
                }
            }
            ans += memo[i + 1] - memo[i];
        }
        return ans;
    }
}