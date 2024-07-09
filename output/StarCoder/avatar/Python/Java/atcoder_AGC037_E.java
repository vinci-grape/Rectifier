import java.util.*;
public class atcoder_AGC037_E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        String S = sc.next();
        boolean aaaa = false;
        if (K >= 15) {
            aaaa = true;
        } else if (2 * Math.pow(2, K) >= N) {
            aaaa = true;
        }
        if (aaaa) {
            System.out.println(S.charAt(0) * N);
            return;
        }
        String U = S + S.substring(0, S.length() - 1);
        char c = S.charAt(0);
        int p = U.indexOf(c);
        int minindex = p;
        p++;
        while (p <= N) {
            if (U.charAt(p) == c) {
                if (checkNormalDict(U, minindex, p)) {
                    minindex = p;
                }
            }
            p++;
        }
        S = U.substring(minindex, minindex + N);
        if (K == 1) {
            System.out.println(S);
        } else {
            int count = 0;
            for (char cc : S.toCharArray()) {
                if (cc == S.charAt(0)) {
                    count++;
                } else {
                    break;
                }
            }
            if (count * (int) Math.pow(2, K - 1) >= N) {
                System.out.println(S.charAt(0) * N);
            } else {
                S = S.charAt(0) * (count * (int) Math.pow(2, K - 1) - 1) + S;
                System.out.println(S.substring(0, N));
            }
        }
    }

    public static boolean checkNormalDict(String U, int pointer1, int pointer2) {
        for (int i = 0; i < N; i++) {
            if (U.charAt(pointer1 + i) > U.charAt(pointer2 + i)) {
                return true;
            } else if (U.charAt(pointer1 + i) < U.charAt(pointer2 + i)) {
                return false;
            }
        }
        return true;
    }
}