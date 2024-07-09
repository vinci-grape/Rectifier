import java.util.*;
public class atcoder_ABC107_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] lst = new int[N];
        for (int i = 0; i < N; i++) {
            lst[i] = sc.nextInt();
        }
        int[] lst_p = new int[N];
        int[] lst_m = new int[N];
        int p = 0;
        int m = 0;
        int x = 0;
        int y = N - 1;
        int lastx = 0;
        int lasty = N - 1;
        for (int i = 0; i < N; i++) {
            if (lst[i] == 0) {
                K--;
            }
            if (lst[i] > 0) {
                lst_p[lastx++] = lst[i];
            } else {
                lst_m[lasty--] = lst[i];
            }
        }
        int ans = 1000000000;
        for (int k = 0; k <= K; k++) {
            for (int j = 0; j <= k && j <= lastx; j++) {
                if (k - j > lasty) {
                    break;
                }
                if (j == 0) {
                    p = 0;
                } else {
                    p = lst_p[j - 1];
                }
                if (k - j == 0) {
                    m = 0;
                } else {
                    m = lst_m[lasty - (k - j)];
                }
                ans = Math.min(ans, 2 * p + Math.abs(m), p + 2 * Math.abs(m));
            }
        }
        System.out.println(ans);
    }
}