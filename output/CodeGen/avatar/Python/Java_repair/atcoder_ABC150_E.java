import java.util.*;

public class atcoder_ABC150_E {
    public int findNthDigit(int n) {
        int mod = 1000000007;
        int[] c = new int[10];
        for (int i = 0; i < 10; i++) {
            c[i] = i;
        }
        c.sort(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2 - o1;
            }
        });
        int b = 1;
        int a = 2;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += c[i] * (a + i * b) % mod;
            ans %= mod;
        }
        return ans;
    }
}