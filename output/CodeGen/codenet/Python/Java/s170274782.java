public class s170274782 {
    public int maxCount(int[] A, int K) {
        int[] baselis = new int[A.length];
        int[] groundlis = new int[A.length];
        for (int i = 0; i < A.length; i++) {
            baselis[i] = A[i];
            groundlis[i] = A[i];
        }
        int count = 0;
        for (int i = 0; i < A.length; i++) {
            count = count + baselis[i] + groundlis[i];
            if (count >= K) {
                count = count - baselis[i];
                count = count - groundlis[i];
                baselis[i] = 0;
                groundlis[i] = 0;
            }
        }
        int max = 0;
        for (int i = 0; i < A.length; i++) {
            if (baselis[i] + groundlis[i] > max) {
                max = baselis[i] + groundlis[i];
            }
        }
        return max;
    }
}