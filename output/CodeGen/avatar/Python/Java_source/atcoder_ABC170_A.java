public class atcoder_ABC170_A {
    public int firstMissingPositive(int[] A) {
        int n = A.length;
        for (int i = 0; i < n; i++) {
            if (A[i] > 0 && A[i] <= n && A[A[i] - 1]!= A[i]) {
                int temp = A[i];
                A[i] = A[temp - 1];
                A[temp - 1] = temp;
            }
        }
        for (int i = 0; i < n; i++) {
            if (A[i]!= i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
}