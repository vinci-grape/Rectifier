public class s103029464 {
    public int[] plusOne(int[] digits) {
        int N = digits.length;
        int[] B = new int[N];
        B[N - 1] = 1;
        for (int i = N - 2; i >= 0; i--) {
            int tmp_sum = 0;
            for (int j = i * 2 + 1; j < N; j += i + 1) {
                tmp_sum += B[j];
                tmp_sum %= 2;
            }
            B[i] = tmp_sum ^ digits[i];
        }
        return B;
    }
}