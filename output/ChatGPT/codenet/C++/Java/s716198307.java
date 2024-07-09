import java.util.Scanner;

public class s716198307 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[100];
        double avg = 0, s, ans;
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
            avg += a[i];
        }
        avg /= n;
        s = Math.abs(a[0] - avg);
        ans = 0;
        for (int i = 1; i < n; i++) {
            if (s > Math.abs(a[i] - avg)) {
                s = Math.abs(a[i] - avg);
                ans = i;
            }
        }
        System.out.println(ans);
    }
}