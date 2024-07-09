import java.util.*;
import java.io.*;
public class atcoder_ABC169_D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n == 1) {
            System.out.println(0);
            return;
        }
        int ans = 0;
        for (int p : primeFactorize(n)) {
            int x = p;
            for (int i = 1; i < 99999999; i++) {
                if (x >= i) {
                    x -= i;
                    ans++;
                } else {
                    break;
                }
            }
        }
        System.out.println(ans);
    }

    private static List<Integer> primeFactorize(int n) {
        List<Integer> arr = new ArrayList<>();
        while (n % 2 == 0) {
            arr.add(2);
            n /= 2;
        }
        int f = 3;
        while (f * f <= n) {
            if (n % f == 0) {
                arr.add(f);
                n /= f;
            } else {
                f += 2;
            }
        }
        if (n!= 1) {
            arr.add(n);
        }
        return arr;
    }
}

