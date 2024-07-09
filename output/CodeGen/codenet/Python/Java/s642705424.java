public class s642705424 {
    public int lengthOfLongestSubstring(String s) {
        int[] map = new int[256];
        int max = 0;
        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (map[s.charAt(i)] == 0) {
                map[s.charAt(i)] = i + 1;
            } else {
                max = Math.max(max, i - start);
                start = map[s.charAt(i)] + 1;
            }
        }
        max = Math.max(max, s.length() - start);
        return max;
    }
}