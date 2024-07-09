import java.util.*;

public class codeforces_546_A {
    public int findKthNumber(int k, int n, int w) {
        int total = 0;
        for (int i = 1; i <= w; i++) {
            total += i * k;
            if (total > n) {
                return total - n;
            }
        }
        return total;
    }
}