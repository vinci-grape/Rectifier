import java.util.Scanner;

public class atcoder_AGC024_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        editorial(n, p);
    }

    public static void editorial(int n, int[] p) {
        if (n == 1) {
            System.out.println(0);
            return;
        }
        int[] a = new int[n + 1];
        for (int i = 0; i < n; i++) {
            a[p[i]] = i;
        }
        int tmp = 1;
        int max_len = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i + 1]) {
                tmp += 1;
                max_len = Math.max(max_len, tmp);
            } else {
                tmp = 1;
            }
        }
        int ans = n - max_len;
        System.out.println(ans);
    }
}