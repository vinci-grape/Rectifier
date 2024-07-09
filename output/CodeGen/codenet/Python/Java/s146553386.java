public class s146553386 {
    public int maxSubArray(int[] A) {
        int[] res_0 = new int[A.length];
        int[] res_1 = new int[A.length];
        for (int i = 0; i < A.length; i++) {
            res_0[i] = res_0[i - 1] + A[i];
        }
        for (int i = A.length - 1; i >= 0; i--) {
            res_1[i] = res_1[i + 1] + A[i];
        }
        int res = 0;
        for (int i = 0; i < A.length; i++) {
            int check = res_0[i] + res_1[A.length - 1 - i];
            res = Math.max(res, check);
        }
        return res;
    }
}