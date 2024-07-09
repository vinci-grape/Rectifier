import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.math.BigInteger;

public class atcoder_ABC172_D {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        BigInteger ans = BigInteger.ZERO;
        for (int i = 1; i <= N; i++) {
            BigInteger bi_i = BigInteger.valueOf(i);
            BigInteger bi_N = BigInteger.valueOf(N);
            BigInteger term = bi_i.multiply(bi_N.divide(bi_i)).multiply(bi_N.divide(bi_i).add(BigInteger.ONE)).divide(BigInteger.valueOf(2));
            ans = ans.add(term);
        }
        System.out.println(ans);
    }
}