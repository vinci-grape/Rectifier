public class codeforces_350_B {
    public int[] findSubstring(String s, String[] words) {
        int[] ans = new int[words.length];
        int[] cnt = new int[words.length];
        int n = s.length();
        for (int i = 0; i < words.length; i++) {
            cnt[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cnt[s.charAt(i) - 'a']++;
        }
        for (int i = 0; i < words.length; i++) {
            if (cnt[i] == 1) {
                int crt = i;
                int x = words[i].charAt(0) - 'a';
                while (cnt[x] == 1) {
                    crt = x;
                    x = words[x].charAt(0) - 'a';
                }
                if (crt > ans[i]) {
                    ans[i] = crt;
                }
            }
        }
        for (int i = 0; i < words.length; i++) {
            if (ans[i] > 0) {
                ans[i] = ans[i] - 1;
            }
        }
        for (int i = 0; i < words.length; i++) {
            if (ans[i] > 0) {
                ans[i] = ans[i] + 1;
            }
        }
        for (int i = 0; i < words.length; i++) {
            if (ans[i] > 0) {
                ans[i] = ans[i] - 1;
            }
        }
        return ans;
    }
}