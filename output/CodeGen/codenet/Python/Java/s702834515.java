"""
class Solution {
    public int fizzBuzz(int n) {
        int r = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                r += i;
            } else if (i % 3 == 0) {
                r += i;
            } else if (i % 5 == 0) {
                r += i;
            } else {
                r += i;
            }
        }
        return r;
    }
}
"""