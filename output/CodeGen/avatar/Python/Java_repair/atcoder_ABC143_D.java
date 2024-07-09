import java.util.*;

public class atcoder_ABC143_D {
    public int maxSubArray(int[] A) {
        int n = A.length;
        int[] l = new int[n];
        for (int i = 0; i < n; i++) {
            l[i] = A[i];
        }
        l = Arrays.sort(l);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int a = l[i];
                int b = l[j];
                int right = Arrays.binarySearch(l, a + b);
                int left = Arrays.binarySearch(l, max(a - b, b - a));
                int tmp = 0;
                if (left <= i) {
                    tmp += 1;
                }
                if (i < right) {
                    tmp += 1;
                }
                if (left <= j) {
                    tmp += 1;
                }
                if (j < right) {
                    tmp += 1;
                }
                ans += tmp;
            }
        }
        return ans / 3;
    }
}