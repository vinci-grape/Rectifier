import java.util.*;
public class codeforces_350_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n + 1];
        int[] a = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            t[i] = sc.nextInt();
            a[i] = sc.nextInt();
        }
        int[] ans = new int[n + 1];
        int[] cnt = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (t[i] == 1) {
                int x = a[i];
                int[] crt = new int[n + 1];
                crt[0] = i;
                int j = 1;
                while (cnt[x] == 1) {
                    crt[j] = x;
                    x = a[x];
                    j++;
                }
                if (j > ans.length) {
                    ans = Arrays.copyOf(crt, j);
                }
            }
        }
        System.out.println(ans.length);
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}
