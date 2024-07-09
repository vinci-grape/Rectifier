public class codeforces_86_A {
    public int maxProduct(int[] A) {
        int l = A[0], r = A[1], first = 10, second = 10, ans = -1;
        for (int i = 2; i < A.length; i++) {
            int curr = A[i];
            int s = 1;
            while (curr!= 0) {
                s++;
                curr /= 10;
            }
            first = Math.max(first, s);
            second = Math.max(second, first / 2);
            ans = Math.max(ans, first * curr);
            curr = A[i];
            s = 1;
            while (curr!= 0) {
                s++;
                curr /= 10;
            }
            first = Math.max(first, s);
            second = Math.max(second, first / 2);
            ans = Math.max(ans, first * curr);
        }
        return ans;
    }
}