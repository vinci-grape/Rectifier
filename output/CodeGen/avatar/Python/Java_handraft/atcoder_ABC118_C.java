public class atcoder_ABC118_C {
    public int gcd(int a, int b) {
        if (a == 0) return b;
        if (b == 0) return a;
        if (a < b) {
            int t = a;
            a = b;
            b = t;
        }
        while (a!= b) {
            if (a > b) {
                a -= b;
            } else {
                b -= a;
            }
        }
        return a;
    }
}