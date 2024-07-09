public class s664563518 {
    public int findMaxLength(int[] A) {
        int n = A.length;
        int[] s = new int[n];
        int[] t = new int[n];
        for (int i = 0; i < n; i++) {
            s[i] = i;
            t[i] = A[i];
        }
        Arrays.sort(s);
        Arrays.sort(t);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i]!= i) {
                ans += t[i];
            }
        }
        return ans;
    }
}