public class s131946120 {
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
        return max;
    }
}