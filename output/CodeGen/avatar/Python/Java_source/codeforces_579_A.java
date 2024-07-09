import java.lang.Math;

public class codeforces_579_A {
    public int findMaxConsecutiveOnes(int n) {
        int x = 1;
        while (Math.log2(n) % 1!= 0) {
            x += 1;
            n -= 2 << (int) (Math.log2(n));
        }
        return x;
    }
}