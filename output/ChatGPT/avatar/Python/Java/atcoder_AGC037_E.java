import java.util.Arrays;
import java.util.Scanner;

public class atcoder_AGC037_E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int K = scanner.nextInt();
        String S = scanner.next();

        boolean aaaa = false;
        if (K >= 15) {
            aaaa = true;
        } else if (Math.pow(2, K) >= N) {
            aaaa = true;
        }

        if (aaaa) {
            char minChar = S.charAt(0);
            for (int i = 1; i < N; i++) {
                minChar = (char) Math.min(minChar, S.charAt(i));
            }
            char[] result = new char[N];
            Arrays.fill(result, minChar);
            System.out.println(new String(result));
            return;
        }

        String U = S + new StringBuilder(S).reverse().toString();
        char minChar = S.charAt(0);
        int minIndex = S.indexOf(minChar);
        for (int i = minIndex + 1; i <= N; i++) {
            if (U.charAt(i) == minChar) {
                if (checkNormalDict(U, minIndex, i)) {
                    minIndex = i;
                }
            }
        }
        String lastDict = U.substring(minIndex, minIndex + N);

        if (K == 1) {
            System.out.println(lastDict);
        } else {
            int count = 0;
            for (char c : lastDict.toCharArray()) {
                if (c == lastDict.charAt(0)) {
                    count++;
                } else {
                    break;
                }
            }
            if (count * Math.pow(2, K - 1) >= N) {
                char[] result = new char[N];
                Arrays.fill(result, lastDict.charAt(0));
                System.out.println(new String(result));
            } else {
                StringBuilder sb = new StringBuilder();
                sb.append(lastDict.charAt(0));
                sb.append(lastDict.charAt(0));
                char[] result = new char[N];
                Arrays.fill(result, lastDict.charAt(0));
                sb.append(new String(result));
                System.out.println(sb.substring(0, N));
            }
        }
    }

    private static boolean checkNormalDict(String u, int pointer1, int pointer2) {
        int N = pointer2 - pointer1;
        for (int i = 0; i < N; i++) {
            if (u.charAt(pointer1 + i) > u.charAt(pointer2 + i)) {
                return true;
            } else if (u.charAt(pointer1 + i) < u.charAt(pointer2 + i)) {
                return false;
            }
        }
        return false;
    }
}