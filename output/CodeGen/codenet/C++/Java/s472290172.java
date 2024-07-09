public class s472290172 {
    public int findMaxLength(String s) {
        int max = 0, cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A' || s.charAt(i) == 'C' || s.charAt(i) == 'G' || s.charAt(i) == 'T') {
                cnt++;
            } else {
                cnt = 0;
            }
            max = max < cnt? cnt : max;
        }
        return max;
    }
}