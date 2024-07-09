public class s259116349 {
    public int numSquares(int n) {
        int[] primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
        int[] divs = new int[n + 1];
        for (int i = 0; i < primes.length; i++) {
            divs[0] = 0;
            for (int j = 0; j < primes[i]; j++) {
                divs[j + 1] = divs[j] + 1;
            }
        }
        int[] divsum = new int[primes.length];
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < primes.length; j++) {
                dvsum[j] += divs[i - 1][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < primes.length; i++) {
            ans += divsum[i] * (dvsum[i] - 1) * (dvsum[i] - 2) / 2;
        }
        return ans;
    }
}