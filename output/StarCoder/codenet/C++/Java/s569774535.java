import java.util.*;

public class s569774535 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int ans = 0;
        boolean ok = true;
        while (ok) {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 1) {
                    System.out.println(ans);
                    return;
                } else {
                    a[i] /= 2;
                }
            }
            ans++;
        }

        System.out.println(ans);
    }
}