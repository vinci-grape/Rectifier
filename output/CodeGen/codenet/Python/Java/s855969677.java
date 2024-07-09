public class s855969677 {
    public int romanToInt(String s) {
        int result = 0;
        int i = 0;
        while (i < s.length()) {
            char c = s.charAt(i);
            if (c == 'I') {
                result += 1;
            } else if (c == 'V') {
                result += 5;
            } else if (c == 'X') {
                result += 10 * (i + 1);
            } else if (c == 'L') {
                result += 50 * (i + 1);
            } else if (c == 'C') {
                result += 100 * (i + 1);
            } else if (c == 'D') {
                result += 500 * (i + 1);
            } else if (c == 'M') {
                result += 1000 * (i + 1);
            }
            i++;
        }
        return result;
    }
}