public class atcoder_ABC147_D {
    public int findMaxForm(int[] A, int N) {
        int result = 0;
        for (int b = 0; b < 60; b++) {
            int bs = (A[b] & 1) == 1? 1 : 0;
            result = (result + bs * (N - bs) * (1 << b)) % 1000000007;
        }
        return result;
    }
}