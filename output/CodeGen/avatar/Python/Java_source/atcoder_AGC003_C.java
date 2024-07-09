public class atcoder_AGC003_C {
    public int findMaxLength(int[] A) {
        int N = A.length;
        Arrays.sort(A);
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            int d = (A[i] % N) % 2;
            if (d % 2!= i % 2) cnt += 1;
        }
        return cnt / 2;
    }
}