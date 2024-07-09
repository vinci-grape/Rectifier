public class s098326932 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k = in.nextInt();
        int n = in.nextInt();
        int res = 0;
        for (int i = 0; i < k; i++) {
            res = f(res + 1);
        }
        System.out.println(res);
    }
    public static int f(int n) {
        int[] a = new int[20];
        int d = 0;
        while (n > 0) {
            a[d] = n % 10;
            n /= 10;
            d++;
        }
        int m = 1e18;
        int res = n;
        for (int i = 0; i <= d; i++) {
            int bunsi = 0;
            int bunbo = 9 * i;
            for (int j = d - 1; j >= 0; j--) {
                bunsi *= 10;
                if (j < i) bunsi += 9;
                else bunsi += a[j];
                
                if (j >= i) bunbo += a[j];
                
            }
            double frac = (double) bunsi / (double) bunbo;
            if (frac < m) {
                m = frac;
                res = bunsi;
            }
        }
        return res;
    }
}