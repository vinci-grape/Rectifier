import java.util.*;

public class atcoder_ABC150_C {
    public int findPermutation(int n, int[] p, int[] q) {
        int[] orig = new int[n];
        for (int i = 0; i < n; i++) {
            orig[i] = i + 1;
        }
        int pn = Arrays.binarySearch(orig, p);
        int qn = Arrays.binarySearch(orig, q);
        return Math.abs(pn - qn);
    }
}