import java.util.Scanner;

public class codeforces_412_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String v = sc.next();
        String[] d = {"LEFT", "RIGHT"};
        boolean f = k - 1 < n - k;
        int m = Math.min(k - 1, n - k);
        String[] a = new String[m + 2 * f + v.length()];
        for (int i = 0; i < m; i++) {
            a[i] = d[f ? 1 : 0];
        }
        for (int i = 0; i < v.length(); i++) {
            a[i + m] = "PRINT " + v.charAt(i);
            a[i + m + v.length()] = d[f ? 0 : 1];
        }
        for (int i = 0; i < a.length - 1; i++) {
            System.out.println(a[i]);
        }
    }
}