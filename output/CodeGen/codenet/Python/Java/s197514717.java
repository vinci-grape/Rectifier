public class s197514717 {
    public int maxTriplets(int[] A, int[] B, int[] C) {
        int max = 0;
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j < B.length; j++) {
                for (int k = 0; k < C.length; k++) {
                    if (A[i] + B[j] + C[k] > max) {
                        max = A[i] + B[j] + C[k];
                    }
                }
            }
        }
        return max;
    }
}