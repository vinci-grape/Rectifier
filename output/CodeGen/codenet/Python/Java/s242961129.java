public class s242961129 {
    public int maxAbsoluteDifference(int[] A) {
        int N = A.length;
        int[] diff = new int[N];
        int[] A1 = new int[N+2];
        int[] A2 = new int[N+2];
        A1[0] = 0;
        A2[N+1] = 0;
        for (int i = 1; i < N; i++) {
            A1[i] = A[i-1];
            A2[i+1] = A[i];
        }
        for (int i = 0; i < N; i++) {
            diff[i] = Math.abs(A1[i+1] - A1[i]) + Math.abs(A2[i] - A2[i+1]) - Math.abs(A1[i] - A2[i+1]);
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            ans += Math.abs(A[i] - A1[i+1]) + Math.abs(A[i] - A2[i+1]) - Math.abs(A1[i] - A2[i+1]);
        }
        for (int i = 0; i < N; i++) {
            ans -= diff[i];
        }
        return ans;
    }
}