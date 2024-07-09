public class s151802561 {
    public int[] sortArrayByParityII(int[] A) {
        int[] res = new int[A.length];
        int i = 0, j = A.length - 1;
        int t;
        while (i < j) {
            if (A[i] % 2 == 0) {
                t = A[i];
                A[i] = A[j];
                A[j] = t;
                j--;
            } else {
                i++;
            }
        }
        for (i = 0; i < A.length; i++) {
            res[i] = A[i];
        }
        return res;
    }
}