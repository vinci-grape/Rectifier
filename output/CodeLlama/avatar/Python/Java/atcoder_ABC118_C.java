import java.util.Scanner;
import java.util.Arrays;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import java.math.BigInteger;

public class atcoder_ABC118_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        BigInteger gcd = BigInteger.valueOf(arr[0]);
        for (int i = 1; i < n; i++) {
            gcd = gcd.gcd(BigInteger.valueOf(arr[i]));
        }
        System.out.println(gcd);
    }
}