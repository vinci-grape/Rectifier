public class atcoder_AGC006_A {
    public int findLengthOfLongestSubstring(String s) {
        int n = s.length();
        int[] map = new int[128];
        int max = 0;
        for (int i = 0; i < n; i++) {
            map[s.charAt(i)]++;
            max = Math.max(max, map[s.charAt(i)]);
        }
        int start = 0;
        int end = 0;
        for (int i = 0; i < n; i++) {
            while (end < n && map[s.charAt(end)] == 0) {
                end++;
            }
            if (end - start > max) {
                max = end - start;
            }
            map[s.charAt(i)]--;
            start = i + 1;
        }
        return max;
    }
}