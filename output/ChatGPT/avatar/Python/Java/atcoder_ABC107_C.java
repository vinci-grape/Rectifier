import java.util.Scanner;

public class atcoder_ABC107_C {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int K = input.nextInt();
        int[] lst = new int[N];
        for (int i = 0; i < N; i++) {
            lst[i] = input.nextInt();
        }
        int[] lst_p = new int[N];
        int[] lst_m = new int[N];
        int p = 0;
        int m = 0;
        int x = 0;
        int y = lst_m.length - 1;
        int lastx = lst_p.length;
        int lasty = lst_m.length;

        int result = check(K, lst_p, lst_m, p, m, x, y, lastx, lasty);
        System.out.println(result);
    }

    public static int check(int k, int[] lst_p, int[] lst_m, int p, int m, int x, int y, int lastx, int lasty) {
        int ans = (int) Math.pow(10, 9);
        for (int j = 0; j <= k; j++) {
            if (j > lastx || k - j > lasty) {
                continue;
            } else {
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
                ans = Math.min(ans, 2 * p + Math.abs(m));
                ans = Math.min(ans, p + 2 * Math.abs(m));
            }
        }
        return ans;
    }
}