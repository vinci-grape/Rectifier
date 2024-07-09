import java.util.Scanner;

public class codeforces_350_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n + 1];
        int[] a = new int[n + 1];
        int[] ans = new int[n + 1];
        int[] cnt = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            t[i] = sc.nextInt();
        }
        for (int i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }
        for (int i = 1; i <= n; i++) {
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (t[i] == 1) {
                int[] crt = new int[n + 1];
                crt[0] = i;
                int x = a[i];
                while (cnt[x] == 1) {
                    crt[crt.length - 1] = x;
                    x = a[x];
                }
                if (crt.length > ans.length) {
                    ans = crt;
                }
            }
        }
        System.out.println(ans.length);
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}