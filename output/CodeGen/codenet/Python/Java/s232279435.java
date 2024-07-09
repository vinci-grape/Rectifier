public class s232279435 {
    public int findLongestWord(String s, String[] d) {
        int ans = 0;
        for (String word : d) {
            int i = 0;
            int j = 0;
            while (i < s.length() && j < word.length()) {
                if (s.charAt(i) == word.charAt(j)) {
                    i++;
                    j++;
                } else {
                    j = 0;
                }
            }
            if (j == word.length()) {
                ans = Math.max(ans, i);
            }
        }
        return ans;
    }
}