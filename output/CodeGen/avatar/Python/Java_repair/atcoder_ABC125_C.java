import java.util.*;

public class atcoder_ABC125_C {
    public int[] ruiseki(int[] A) {
        int[] left = new int[A.length + 1];
        int[] right = new int[A.length + 1];
        left[0] = 0;
        right[0] = 0;
        for (int i = 0; i < A.length; i++) {
            left[i + 1] = left[i] + A[i];
            right[i + 1] = right[i] + A[i];
        }
        int[] result = new int[A.length];
        for (int i = 0; i < A.length; i++) {
            result[i] = gcd(left[i], right[i + 1]);
        }
        return result;
    }
    public int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}