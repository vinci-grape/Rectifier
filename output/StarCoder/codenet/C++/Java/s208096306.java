import java.util.*;

public class s208096306 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = sc.nextInt();
        for (int i = 1; i < n; i++) {
            int a = sc.nextInt();
            ans = gcd(ans, a);
        }
        System.out.println(ans);
    }

    public static int gcd(int a, int b) {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        int r;
        while ((r = a % b) > 0) {
            a = b;
            b = r;
        }
        return b;
    }
}