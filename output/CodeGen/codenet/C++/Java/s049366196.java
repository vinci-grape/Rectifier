public class s049366196 {
    public static void main(String[] args) {
        int N;
        Scanner in = new Scanner(System.in);
        N = in.nextInt();
        int ans = 1;
        for (int i = 2; i <= N; i++) {
            if (isPrime(i)) {
                int NN = N;
                int cnt = 0;
                while (NN) {
                    cnt += NN / i;
                    NN /= i;
                }
                ans *= cnt + 1;
                ans %= 1000000007;
            }
        }
        System.out.println(ans);
    }

    private static boolean isPrime(long n) {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        long sq = (long)Math.sqrt(n);
        for (long i = 3; i <= sq; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }
}