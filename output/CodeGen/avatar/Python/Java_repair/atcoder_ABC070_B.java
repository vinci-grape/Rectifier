import java.util.*;

public class atcoder_ABC070_B {
    public int maxProfit(int[] prices) {
        int len = prices.length;
        if (len < 2) return 0;
        int[] A = new int[len];
        for (int i = 0; i < len; i++) {
            A[i] = prices[i];
        }
        A = Arrays.sort(A);
        if (A[1] <= A[2] || A[3] <= A[0]) return 0;
        return A[2] - A[1];
    }
}