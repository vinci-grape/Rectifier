import java.util.Scanner;

public class s778828888 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n, m, x;
        int[] a = new int[105];

        n = scanner.nextInt();
        m = scanner.nextInt();
        x = scanner.nextInt();

        for (int i = 0; i < m; ++i) {
            int temp = scanner.nextInt();
            a[temp] = 1;
        }

        int ansl = 0, ansr = 0, i;
        for (i = x; i <= n; ++i) {
            ansr += a[i];
        }
        for (i = x; i >= 0; --i) {
            ansl += a[i];
        }

        System.out.println(Math.min(ansl, ansr));
    }
}