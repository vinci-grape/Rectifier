public class codeforces_106_B {
    public int[] findShortestSubarray(int[] A, int[] B) {
        int[] res = new int[2];
        int min = Integer.MAX_VALUE;
        int i = 0;
        int j = 0;
        for (int k = 0; k < A.length; k++) {
            if (A[k] < B[j]) {
                min = Math.min(min, A[k]);
                i = k;
            } else {
                j++;
            }
        }
        res[0] = i;
        res[1] = j;
        return res;
    }
}