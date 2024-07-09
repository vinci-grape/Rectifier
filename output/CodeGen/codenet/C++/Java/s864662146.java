public class s864662146 {
    public int maxSubArray(int[] A) {
        int m = A[0];
        int M = A[0];
        for (int i = 0; i < A.length; i++) {
            if (A[i] < m) m = A[i];
            if (A[i] > M) M = A[i];
        }
        return M - m;
    }
}