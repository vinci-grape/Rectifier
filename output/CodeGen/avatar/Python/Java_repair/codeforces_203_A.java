import java.util.*;

public class codeforces_203_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int t = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int da = in.nextInt();
        int db = in.nextInt();
        if (x == 0) {
            System.out.println("YES");
            return;
        }
        int a_time = Math.min(a / da, t - 1);
        int b_time = Math.min(b / db, t - 1);
        for (int i = 0; i < a_time + 1; i++) {
            for (int j = 0; j < b_time + 1; j++) {
                if (a - da * i == x || b - db * j == x) {
                    System.out.println("YES");
                    return;
                }
                if (a - da * i + b - db * j == x) {
                    System.out.println("YES");
                    return;
                }
            }
        }
        System.out.println("NO");
    }
}