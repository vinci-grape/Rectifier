import java.util.*;

public class codeforces_612_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] b = new int[n];
        b[0] = 1;
        for (int i = 1; i < n; i++) {
            b[i] = 1;
            for (int j = 0; j < i; j++) {
                if (scanner.nextInt() > scanner.nextInt()) {
                    b[i] = Math.max(b[i], b[j] + 1);
                }
            }
        }
        int res = 0;
        for (int i = 1; i < n; i++) {
            res += Math.abs(b[i] - b[i - 1]);
        }
        System.out.println(res);
    }
}