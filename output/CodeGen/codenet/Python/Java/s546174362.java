public class s546174362 {
    public int findMaxForm(int[] A, int M, int N) {
        int[] sortedA = Arrays.copyOf(A, A.length);
        Arrays.sort(sortedA);
        int i = -1;
        while (M > 0) {
            sortedA[++i] /= 2;
            M--;
        }
        i = -2;
        while (M > 0 && -N <= i && sortedA[i] >= sortedA[i + 1]) {
            sortedA[i] /= 2;
            M--;
            i--;
        }
        Arrays.sort(sortedA);
        return sum(sortedA);
    }
    private int sum(int[] A) {
        int sum = 0;
        for (int i = 0; i < A.length; i++) {
            sum += A[i];
        }
        return sum;
    }
}