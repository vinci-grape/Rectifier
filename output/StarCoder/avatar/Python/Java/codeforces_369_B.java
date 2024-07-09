import java.util.*;
public class codeforces_369_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int l = sc.nextInt();
        int r = sc.nextInt();
        int sa = sc.nextInt();
        int sk = sc.nextInt();
        int[] ans = new int[n];
        int[] a = new int[k];
        int[] b = new int[n - k];
        for (int i = 0; i < k; i++) {
            a[i] = sk;
        }
        for (int i = 0; i < n - k; i++) {
            b[i] = sa - sk;
        }
        for (int i = 0; i < n; i++) {
            if (i < k) {
                ans[i] = a[i];
            } else {
                ans[i] = b[i - k];
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}