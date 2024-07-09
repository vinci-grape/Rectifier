public class s907227314 {
    public int lengthOfLongestSubstring(String s) {
        int a = 0, z = 0;
        int max = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                a = i;
            } else if (s.charAt(i) == 'Z') {
                z = i;
            }
            max = Math.max(max, i - a + 1);
        }
        return max;
    }
}