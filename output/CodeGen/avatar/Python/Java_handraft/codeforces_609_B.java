public class codeforces_609_B {
    public int findMaxForm (String[] strs, int m, int n) {
        int[] l = new int[26];
        for (int i = 0; i < n; i++) {
            l[strs[i].charAt(0) - 'a']++;
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            if (l[i] > 1) {
                res += n - i - l[i];
                l[i]--;
            } else {
                res += n - i - 1;
            }
        }
        return res;
    }
}