import java.util.Scanner;

public class s242961129 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n + 2];
        for (int i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }
        int ans = Math.abs(a[n]);
        a[0] = 0;
        a[n + 1] = 0;
        int[] diff = new int[n];
        for (int i = 1; i <= n; i++) {
            int dif = Math.abs(a[i] - a[i - 1]) + Math.abs(a[i] - a[i + 1]) - Math.abs(a[i - 1] - a[i + 1]);
            ans += Math.abs(a[i] - a[i - 1]);
            diff[i - 1] = dif;
        }
        for (int i = 0; i < n; i++) {
            System.out.println(ans - diff[i]);
        }
    }
}