import java.util.Scanner;

public class atcoder_AGC003_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt() * n + i;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int d = (a[i] % n) % 2;
            if (d % 2 != i % 2) {
                cnt++;
            }
        }
        System.out.println(cnt / 2);
    }
}