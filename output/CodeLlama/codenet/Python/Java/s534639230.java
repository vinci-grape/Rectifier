import java.util.*;
import java.io.*;

public class s534639230 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] D = new int[N];
        for (int i = 0; i < N; i++) {
            D[i] = sc.nextInt();
        }

        int mod = 998244353;

        if (D[0] != 0) {
            System.out.println(0);
            return;
        }

        Map<Integer, Integer> cnt = new HashMap<>();
        for (int i = 0; i < N; i++) {
            if (cnt.containsKey(D[i])) {
                cnt.put(D[i], cnt.get(D[i]) + 1);
            } else {
                cnt.put(D[i], 1);
            }
        }

        if (cnt.get(0) > 1) {
            System.out.println(0);
            return;
        }

        long res = 1;

        for (int i = 1; i <= Collections.max(cnt.keySet()); i++) {
            if (cnt.get(i-1) == 1) {
                continue;
            }
            res *= (cnt.get(i-1)**cnt.get(i)) %mod;
            res %= mod;
        }

        System.out.println(res);
    }
}