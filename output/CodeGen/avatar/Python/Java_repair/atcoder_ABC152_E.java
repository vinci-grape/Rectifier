import java.util.*;

public class atcoder_ABC152_E {
    public int findLcm(int[] A) {
        int lcm = 1;
        for (int a : A) {
            lcm = lcm * a / gcd(lcm, a);
        }
        return lcm * (1 + sum(A) / MOD) % MOD;
    }
    
    public int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
}