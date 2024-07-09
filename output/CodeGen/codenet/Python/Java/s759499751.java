public class s759499751 {
    public int trap(int[] A) {
        int n = A.length;
        int[] c = new int[n];
        for (int i = 0; i < n; i++) {
            if (A[i] == 'C') {
                c[i] = c[i - 1] + 1;
            } else {
                c[i] = c[i - 1];
            }
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            if (A[i] == 'C' && A[i + 1] == 'A') {
                ans += Math.max(c[i], c[i + 1]);
            }
        }
        return ans;
    }
}