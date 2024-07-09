import java.util.*;

public class s778828888 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int x = sc.nextInt();
        int a[] = new int[105];
        for(int i = 0; i < m; i++) {
            int temp = sc.nextInt();
            a[temp] = 1;
        }
        int ansl = 0, ansr = 0, i;
        for(i = x; i <= n; i++) {
            ansr += a[i];
        }
        for(i = x; i >= 0; i--) {
            ansl += a[i];
        }
        System.out.println(Math.min(ansl, ansr));
    }
}