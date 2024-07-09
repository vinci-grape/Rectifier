import java.util.Scanner;

public class s744854383 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] a = new int[N];
        for (int i = 0; i < N; i++) {
            a[i] = sc.nextInt();
        }

        int idx = 1;
        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] == idx) {
                idx++;
            } else {
                ans++;
            }
        }

        if (idx == 1) {
            System.out.println(-1);
        } else {
            System.out.println(ans);
        }
    }
}