public class s174910557 {
    public int lengthOfLongestSubstring(String s) {
        int max = 0;
        int start = 0;
        int end = 0;
        int[] map = new int[256];
        for (int i = 0; i < map.length; i++) {
            map[i] = -1;
        }
        while (end < s.length()) {
            while (end < s.length() && map[s.charAt(end)]!= -1) {
                end++;
            }
            if (end - start > max) {
                max = end - start;
            }
            map[s.charAt(start)] = start;
            start++;
            end++;
        }
        return max;
    }
}