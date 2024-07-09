import java.util.*;

public class s534639230 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] D = new int[N];
        for (int i = 0; i < N; i++) {
            D[i] = sc.nextInt();
        }

        int mod = 998244353;

        if (D[0]!= 0) {
            System.out.println(0);
            return;
        }

        Map<Integer, Integer> cnt = new HashMap<>();
        for (int i = 0; i < N; i++) {
            cnt.put(D[i], cnt.getOrDefault(D[i], 0) + 1);
        }

        if (cnt.getOrDefault(0, 0) > 1) {
            System.out.println(0);
            return;
        }

        long res = 1;

        for (int i = 1; i <= Math.max(D); i++) {
            if (cnt.getOrDefault(i-1, 0) == 1) {
                continue;
            }
            res *= cnt.get(i-1).intValue()**(cnt.get(i).intValue()) % mod;
            res %= mod;
        }

        System.out.println(res);
    }
}