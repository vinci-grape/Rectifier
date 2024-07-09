import java.util.Scanner;
import java.math.BigInteger;

public class s790754864 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int R = N - K;
        BigInteger mod = new BigInteger("1000000007");
        for (int i = 1; i <= K; i++) {
            if (N - K + 1 < i) {
                System.out.println(0);
            } else {
                BigInteger ans = fact(R + 1, i).multiply(fact(K - 1, i - 1));
                System.out.println(ans.mod(mod).intValue());
            }
        }
    }

    public static BigInteger fact(int n, int r) {
        BigInteger ans = new BigInteger("1");
        for (int i = 1; i <= r; i++) {
            ans = ans.multiply(new BigInteger(String.valueOf(n - r + i)));
        }
        return ans;
    }
}