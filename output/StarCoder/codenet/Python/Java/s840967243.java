import java.math.BigInteger;
import java.util.Scanner;

public class s840967243 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        BigInteger f = BigInteger.valueOf(1);
        for (int i = 1; i <= n; i++) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        for (int i = 1; i <= m; i++) {
            f = f.multiply(BigInteger.valueOf(i));
        }
        System.out.println(f.mod(BigInteger.valueOf(1000000007)));
    }
}