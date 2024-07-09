import java.math.BigInteger;
import java.util.Scanner;
public class atcoder_ABC152_E {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        BigInteger ans = BigInteger.valueOf(1);
        for (int i = 0; i < n; i++) {
            ans = ans.multiply(BigInteger.valueOf(a[i])).divide(BigInteger.valueOf(gcd(ans.intValue(), a[i])));
        }
        ans = ans.multiply(BigInteger.valueOf(Arrays.stream(a).map(x -> x * (x - 1) / 2).sum()));
        System.out.println(ans.mod(BigInteger.valueOf(1000000007)));
    }

    public static int gcd(int a, int b) {
        return b == 0? a : gcd(b, a % b);
    }
}