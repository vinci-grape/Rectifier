public class s952264435 {
    public int missingNumber(int[] A) {
        int sum = 0;
        for (int i = 0; i < A.length; i++) {
            sum += A[i];
        }
        return N - sum;
    }
}