import java.util.*;
import java.io.*;

public class atcoder_ABC169_D {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        if (n == 1) {
            System.out.println(0);
            return;
        }

        List<Integer> fac = primeFactorize(n);
        Map<Integer, Integer> count = new HashMap<>();
        for (int i : fac) {
            count.put(i, count.getOrDefault(i, 0) + 1);
        }

        int ans = 0;
        for (int e : count.values()) {
            int x = e;
            for (int i = 1; i <= Integer.MAX_VALUE; i++) {
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

    public static List<Integer> primeFactorize(int n) {
        List<Integer> fac = new ArrayList<>();

        while (n % 2 == 0) {
            fac.add(2);
            n /= 2;
        }

        for (int f = 3; f * f <= n; f += 2) {
            while (n % f == 0) {
                fac.add(f);
                n /= f;
            }
        }

        if (n != 1) {
            fac.add(n);
        }

        return fac;
    }
}