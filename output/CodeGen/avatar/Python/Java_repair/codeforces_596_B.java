import java.util.*;

public class codeforces_596_B {
    public int maxAbsoluteDifference(int[] A) {
        int n = A.length;
        int[] r = new int[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            r[i] = A[i];
        }
        for (int i = 0; i < n - 1; i++) {
            ans += Math.abs(r[i] - r[i + 1]);
        }
        return ans;
    }
}