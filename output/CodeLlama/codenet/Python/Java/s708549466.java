import java.util.Scanner;

public class s708549466 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int x = sc.nextInt();
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = sc.nextInt();
        }
        int cnt = 0;
        for (int i = 1; i < N; i++) {
            int tmp = a[i - 1] + a[i];
            if (tmp > x) {
                if (tmp - x > a[i]) {
                    a[i - 1] = tmp - a[i] - x;
                    a[i] = 0;
                } else {
                    a[i] = a[i] - (tmp - x);
                }
                cnt += tmp - x;
            }
        }
        System.out.println(cnt);
    }
}
