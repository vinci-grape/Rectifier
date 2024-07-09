import java.util.Scanner;
import java.math.BigInteger;
public class s840967243 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger n = sc.nextBigInteger();
        BigInteger m = sc.nextBigInteger();
        BigInteger MOD = new BigInteger("1000000007");
        BigInteger f = new BigInteger("1");
        for (int i = 1; i <= n; i++) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        for (int i = 1; i <= m; i++) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        System.out.println(Math.max(2 - m.intValue() + n.intValue(), 0)*f.mod(MOD).intValue());
    }
}