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
        } else if (Math.pow(2, K) >= N) {
            aaaa = true;
        }
        if (aaaa) {
            System.out.println(min(S) * N);
            return;
        }
        S = getLastDict(S);
        if (K == 1) {
            System.out.println(S);
        } else {
            int count = 0;
            for (int i = 0; i < N; i++) {
                if (S.charAt(i) == S.charAt(0)) {
                    count++;
                } else {
                    break;
                }
            }
            if (count * (int) Math.pow(2, K - 1) >= N) {
                System.out.println(S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) + S.charAt(0) +