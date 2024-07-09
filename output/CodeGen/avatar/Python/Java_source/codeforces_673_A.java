public class codeforces_673_A {
    public int maxRotateFunction(int[] A) {
        int n = A.length;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += A[i];
        }
        if (sum > 15) return 15;
        int max = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] > max) max = A[i];
        }
        if (max == 90 || max + 15 >= 90) return 90;
        int min = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] < min) min = A[i];
        }
        int sum2 = 0;
        for (int i = 0; i < n; i++) {
            sum2 += A[i];
        }
        if (sum2 - min > 15) return 15;
        int max2 = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] > max2) max2 = A[i];
        }
        return max2 + 15;
    }
}