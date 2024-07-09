public class codeforces_265_B {
    public int findLengthOfLastWord(String s) {
        int ans = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) =='') {
                last = i;
            }
            if (s.charAt(i)!='') {
                ans += i - last;
                last = i;
            }
        }
        return ans + 1;
    }
}